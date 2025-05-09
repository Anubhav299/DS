

import pandas as pd
import numpy as np

hf = pd.read_csv("S:\ML\Project\HOHE.csv")
hf

x = hf.drop('HeartDisease',axis=1)
x
y = np.array(hf.iloc[:,18])
y

hf.columns

from sklearn.model_selection import train_test_split
x_train, x_test,y_train,y_test=train_test_split(x,y,test_size=0.2)

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
                            ,'importance':np.round(dtc.feature_importances_,12)})
importances = importances.sort_values('importance',ascending=False)
print(importances)


