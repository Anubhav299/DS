# -*- coding: utf-8 -*-
"""
Created on Tue Jan 11 20:20:28 2022

@author: asus
"""


import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

wat=pd.read_csv("Water.csv",header=None)
wat.drop([10],axis=1,inplace=True)
wat.dropna(inplace=True)
wat
wat.isnull().sum()
wat.shape

x = np.array(wat.iloc[:,:9])
x
y=np.array(wat.loc[:,9])
y


from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
knn=KNeighborsClassifier(n_neighbors=1,p=2)
knn.fit(x,y)
y_predict=knn.predict(x)
score=metrics.accuracy_score(y, y_predict)
#precis = metrics.precision_score(y, y_predict,average=None)
print(score)
#print(precis)
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