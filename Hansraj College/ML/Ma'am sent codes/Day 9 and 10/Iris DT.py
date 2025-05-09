# -*- coding: utf-8 -*-
"""
Created on Mon Jul  6 18:04:26 2020

@author: BALJEET KAUR
"""

from sklearn import datasets


iris= datasets.load_iris()
x=iris.data
iris.feature_names
y=iris.target
iris.target_names
iris.data.shape

    
import matplotlib.pyplot as plt



plt.scatter(x[:,0],x[:,1],c=y)
plt.scatter(x[:,0],x[:,2],c=y)
plt.scatter(x[:,0],x[:,3],c=y)

#y1=y
#y1[100:150]=1 #it has changed the values of y: remember it is a broadcast
#plt.scatter(x[:,0],x[:,3],c=y1)


from sklearn import metrics
from sklearn.model_selection import train_test_split
x_train, x_test,y_train,y_test=train_test_split(x,y,test_size=0.2)

from sklearn.tree import DecisionTreeClassifier
from sklearn import metrics
dtc=DecisionTreeClassifier(max_depth=2)
dtc.fit(x_train,y_train)
y_predict=dtc.predict(x_test)

y_predict_prob=dtc.predict_proba(x_test)
score=metrics.accuracy_score(y_test, y_predict)
print(score)
print(metrics.confusion_matrix(y_test, y_predict))

from sklearn import tree

tree.plot_tree(dtc,feature_names=iris.feature_names,  
                   class_names=iris.target_names,
                   filled=True);
############################################################