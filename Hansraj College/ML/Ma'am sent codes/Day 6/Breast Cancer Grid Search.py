# -*- coding: utf-8 -*-
"""
Created on Sun Jan 16 11:42:23 2022

@author: asus
"""

from sklearn import datasets

from sklearn.model_selection import GridSearchCV
from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
from sklearn.model_selection import train_test_split
breast_cancer = datasets.load_breast_cancer()

X = breast_cancer.data
y = breast_cancer.target

x_train, x_test, y_train, y_test = train_test_split(X, y, test_size = 0.2)
knn = KNeighborsClassifier()

#Sample 1

# k_range = list(range(1, 6))
# param_grid = dict(n_neighbors=k_range)
# grid = GridSearchCV(knn, param_grid, cv=10, scoring='accuracy')
# # fitting the model for grid search
# grid_search=grid.fit(x_train, y_train)
# print(grid_search.best_params_) 

# knn = KNeighborsClassifier(n_neighbors=4)

# knn.fit(x_train, y_train)

# y_test_hat=knn.predict(x_test) 

# test_accuracy=metrics.accuracy_score(y_test,y_test_hat)*100

# print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )




#Sample 2 with more than one parametr to be grid searched

k_range = list(range(1, 10))
weight = ['uniform', 'distance']
ps=[1,2]
param_grid = dict(n_neighbors=k_range,weights=weight,p=ps)
grid = GridSearchCV(knn, param_grid, cv=10, scoring='accuracy')
# fitting the model for grid search
grid_search=grid.fit(x_train, y_train)
print(grid_search.best_params_) 

print('Best K neighbours:', grid_search.best_estimator_.get_params()['n_neighbors'])
print('Best weight:', grid_search.best_estimator_.get_params()['weights'])
print('Beat P value:',grid_search.best_estimator_.get_params()['p'])
best_k=grid_search.best_estimator_.get_params()['n_neighbors'];
best_w=grid_search.best_estimator_.get_params()['weights'];
best_p=grid_search.best_estimator_.get_params()['p'];

knn = KNeighborsClassifier(n_neighbors=best_k,weights=best_w,p=best_p);

knn.fit(x_train, y_train)

y_test_hat=knn.predict(x_test) 

test_accuracy=metrics.accuracy_score(y_test,y_test_hat)*100

print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )












"""
std_slc = StandardScaler()
dec_tree = tree.DecisionTreeClassifier()

 
weight = ['uniform', 'distnace']
k_value = [1,2,3,4,5]
parameters = dict(dec_tree__criterion=criterion,
                      dec_tree__max_depth=max_depth)


knn = KNeighborsClassifier()
k_range = list(range(1, 6))
param_grid = dict(n_neighbors=k_range)

clf_GS = GridSearchCV(pipe, parameters)
#clf_GS = GridSearchCV(dec_tree, parameters)

clf_GS.fit(X, y)
print('Best Criterion:', clf_GS.best_estimator_.get_params()['dec_tree__criterion'])
print('Best max_depth:', clf_GS.best_estimator_.get_params()['dec_tree__max_depth'])
print(); print(clf_GS.best_estimator_.get_params()['dec_tree'])


import numpy as np
param_grid = { 'criterion':['gini','entropy'],'max_depth': np.arange(3, 15)}
    # decision tree model
dtree_model=tree.DecisionTreeClassifier()
    #use gridsearch to test all values
dtree_gscv = GridSearchCV(dtree_model, param_grid)
    #fit model to data
dtree_gscv.fit(X, y)
print(); print(dtree_gscv.best_estimator_.get_params()['dtree_model'])
"""