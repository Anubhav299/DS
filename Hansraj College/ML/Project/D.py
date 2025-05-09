import pandas as pd
import numpy as np
from sklearn import metrics
from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
df = pd.read_csv('HOHE.csv')

#df.drop('Unnamed: 0',axis=1,inplace=True)
#x=df.drop(['HeartDisease','Sex_M','Sex_F','Age','MaxHR'],axis=1)
x=df.drop(['HeartDisease','ChestPainType_NAP','RestingECG_ST','RestingBP',
           'RestingECG_ST','RestingECG_Normal','ChestPainType_TA','RestingECG_LVH']
           ,axis=1)
y=df.iloc[:,18]

from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
score_list=[]
a = []
i = 0
j = 0
while j<5:
    score_list=[]
    i = 0
    while i<5:
        x_train, x_test,y_train,y_test = train_test_split(x,y,test_size=0.1)
        rfc=RandomForestClassifier(n_estimators=300,criterion='gini')  
        rfc.fit(x_train , y_train)
        y_predict=rfc.predict(x_test)
        score=metrics.recall_score(y_test, y_predict)
        score_list.append(score)
        i+=1
    print(score_list)
    a.append(np.mean(score_list))
    j+=1
print("list -- a",a)
print("Average values",np.mean(a))
