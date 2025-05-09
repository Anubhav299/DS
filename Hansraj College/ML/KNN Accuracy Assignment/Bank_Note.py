# -*- coding: utf-8 -*-
"""
Created on Wed Jan 12 10:38:35 2022

@author: asus
"""

import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

bn =pd.read_csv("S:\ML\KNN Accuracy Assignment\Bank_Note.csv",header=None)
#dd.drop([10],axis=1,inplace=True)
bn.dropna(inplace=True)
bn
bn.isnull().sum()
bn.shape
bn[4].unique()

x = np.array(bn.iloc[:,:4])
x
y=np.array(bn.loc[:,4])
y


from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
knn=KNeighborsClassifier(n_neighbors=7,p=1)
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
    knn=KNeighborsClassifier(n_neighbors=i,p=2,weights='distance')
    knn.fit(x,y)
    y_predict=knn.predict(x)
    score_list.append(metrics.accuracy_score(y,y_predict))
    print(i)
    print(metrics.accuracy_score(y,y_predict))
    print(metrics.confusion_matrix(y, y_predict))
 
plt.plot(k_range,score_list)
plt.xlabel('values for k')
plt.ylabel('score')
plt.show()
"""