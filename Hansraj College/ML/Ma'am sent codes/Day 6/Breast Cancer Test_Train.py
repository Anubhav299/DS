# -*- coding: utf-8 -*-
"""
Created on Sun Jan 16 11:40:01 2022

@author: asus
"""

from sklearn import datasets

breast_cancer = datasets.load_breast_cancer()
x=breast_cancer.data
breast_cancer.feature_names
y=breast_cancer.target
breast_cancer.target_names
breast_cancer.data.shape

from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
knn=KNeighborsClassifier(n_neighbors=1)

from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.2,     
                                                    random_state = 0)

knn.fit(x_train,y_train)
y_predict=knn.predict(x_test)
score=metrics.accuracy_score(y_test, y_predict)
print(score)
print(metrics.confusion_matrix(y_test, y_predict))

k_range=range(1,10)
score_list=[]
for i in k_range:
    knn=KNeighborsClassifier(n_neighbors=i)
    knn.fit(x_train,y_train)
    y_predict=knn.predict(x_test)
    score_list.append(metrics.accuracy_score(y_test, y_predict))
    
    
import matplotlib.pyplot as plt
plt.plot(k_range,score_list)
plt.xlabel('values for k')
plt.ylabel ('score')   
plt.show()
