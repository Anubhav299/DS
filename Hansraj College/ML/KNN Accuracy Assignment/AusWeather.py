
# -*- coding: utf-8 -*-
"""
Created on Mon Jan 10 10:49:20 2022

@author: asus
"""

import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

from sklearn import datasets

aus=pd.read_csv("AUS.csv",header=None)
#aus.drop(,axis=1,inplace=True)
aus

x = aus.iloc[:,0:23]
#y=aus[0]
x
y=aus.columns
x.shape
wine= datasets.load_wine()
x=wine.data
wine.feature_names
y=wine.target
wine.target_names
wine.data.shape

from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
knn=KNeighborsClassifier(n_neighbors=1,p=2)
knn.fit(x,y)
y_predict=knn.predict(x)
score=metrics.accuracy_score(y, y_predict)
precis = metrics.precision_score(y, y_predict,average=None)
print(score)
print(precis)
print(metrics.confusion_matrix(y, y_predict))

"""
k_range=range(1,10)
score_list=[]
for i in k_range:
    knn=KNeighborsClassifier(n_neighbors=i,weights='distance')
    knn.fit(x,y)
    y_predict=knn.predict(x)
    score_list.append(metrics.accuracy_score(y,y_predict))
 
plt.plot(k_range,score_list)
plt.xlabel('values for k')
plt.ylabel('score')
plt.show()
"""