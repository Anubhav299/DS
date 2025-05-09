import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

hf = pd.read_csv("S:\ML\Heart Failure Dataset.csv")
hf
hf.columns
hf.drop(['age','anaemia','creatinine_phosphokinase','diabetes'
        ,'high_blood_pressure', 'platelets','serum_sodium', 'sex', 'smoking', 'time'],axis=1,inplace=True)
hf
x = np.array(hf.iloc[:,:2])
y = np.array(hf.iloc[:,2])
y

from sklearn.model_selection import train_test_split
x_train, x_test,y_train,y_test=train_test_split(x,y,test_size=0.1
                                                ,stratify=y)

from sklearn.tree import DecisionTreeClassifier
from sklearn import metrics
dtc=DecisionTreeClassifier(max_depth=2)
dtc.fit(x_train,y_train)
y_predict=dtc.predict(x_test)
score=metrics.accuracy_score(y_test, y_predict)
print(score)
print(metrics.confusion_matrix(y_test, y_predict))


dtc.feature_importances_
import pandas as pd
import numpy as np
importances = pd.DataFrame({'feature':pd.DataFrame(x_train).columns
                            ,'importance':np.round(dtc.feature_importances_,3)})
importances = importances.sort_values('importance',ascending=False)
print(importances)

