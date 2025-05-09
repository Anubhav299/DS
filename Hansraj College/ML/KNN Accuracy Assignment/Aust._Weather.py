# -*- coding: utf-8 -*-
"""
Created on Tue Jan 11 19:07:43 2022

@author: asus
"""


import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

aus=pd.read_csv("Book 5.csv",header=None)
aus
aus.shape
aus.columns
x = np.array(aus.iloc[0:501,0:17])
x
x.shape
y=np.array(aus.loc[0:500,17])
y


from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
knn=KNeighborsClassifier(n_neighbors=1,p=1)
knn.fit(x,y)
y_predict=knn.predict(x)
score=metrics.accuracy_score(y, y_predict)
#precis = metrics.precision_score(y, y_predict,average=None)
print(score)
#print(precis)
print(metrics.confusion_matrix(y, y_predict))


k_range=range(1,10)
score_list=[]
for i in k_range:
    knn=KNeighborsClassifier(n_neighbors=i,p=2)
    knn.fit(x,y)
    y_predict=knn.predict(x)
    score_list.append(metrics.accuracy_score(y,y_predict))
    print(i)
    print(metrics.accuracy_score(y,y_predict))
    print(metrics.confusion_matrix(y, y_predict))
    
print(score_list)

plt.plot(k_range,score_list)
plt.xlabel('values for k')
plt.ylabel('score')
plt.show()
