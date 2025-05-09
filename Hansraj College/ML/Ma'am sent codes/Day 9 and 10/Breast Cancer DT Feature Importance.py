# -*- coding: utf-8 -*-
"""
Created on Mon Jul  6 19:11:10 2020

@author: BALJEET KAUR
"""

from sklearn import datasets

breast_cancer= datasets.load_breast_cancer()
x=breast_cancer.data
breast_cancer.feature_names
y=breast_cancer.target
breast_cancer.target_names
breast_cancer.data.shape

from sklearn.model_selection import train_test_split
x_train, x_test,y_train,y_test=train_test_split(x,y,test_size=0.2)

from sklearn.tree import DecisionTreeClassifier
from sklearn import metrics
dtc=DecisionTreeClassifier(max_depth=3)
dtc.fit(x_train,y_train)
y_predict=dtc.predict(x_test)
score=metrics.accuracy_score(y_test, y_predict)
print(score)
print(metrics.confusion_matrix(y_test, y_predict))


dtc.feature_importances_
import pandas as pd
import numpy as np
importances = pd.DataFrame({'feature':breast_cancer.feature_names[pd.DataFrame(x_train).columns]
                            ,'importance':np.round(dtc.feature_importances_,3)})
importances = importances.sort_values('importance',ascending=False)
print(importances)
