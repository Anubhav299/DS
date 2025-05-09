# -*- coding: utf-8 -*-
"""
Created on Sun Jan 16 11:40:01 2022

@author: asus
"""

import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

from sklearn import datasets

# try:
#     from IPython import get_ipython
#     get_ipython().magic('clear')
#     get_ipython().magic('reset -f')
# except:
#     pass

bn =pd.read_csv("S:\ML\KNN Accuracy Assignment\Bank_Note.csv",header=None)
bn
bn.isnull().sum()
bn.shape
bn[4].value_counts()

x = np.array(bn.iloc[:,:4])
x
y=np.array(bn.loc[:,4])
y
from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
knn=KNeighborsClassifier(n_neighbors=8,p=1)

from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.2
                                                    ,stratify = y)

knn.fit(x_train,y_train)
y_predict=knn.predict(x_test)
score=metrics.accuracy_score(y_test, y_predict)
print(score)
print(metrics.confusion_matrix(y_test, y_predict))

w_range=['uniform','distance']
p_range=[1,2]
for k in w_range:
    
    for j in p_range:
        k_range=range(1,10)
        score_list=[]
        for i in k_range:
            knn=KNeighborsClassifier(n_neighbors=i,p=j,weights=k)
            knn.fit(x_train,y_train)
            y_predict=knn.predict(x_test)
            score_list.append(metrics.accuracy_score(y_test, y_predict))
            print("-----------")
            print(metrics.accuracy_score(y_test, y_predict))
            print(i)
            print(j)
            print(k)
   
        plt.plot(k_range,score_list)
        plt.xlabel('values for k')
        plt.ylabel ('score')   
        plt.show()
