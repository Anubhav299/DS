# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 12:17:13 2022

@author: BALJEET KAUR
"""
from sklearn.svm import SVC
from sklearn.datasets.samples_generator import make_circles
from sklearn import metrics
import matplotlib.pyplot as plt

import numpy as np

X, y = make_circles(100, factor=.1, noise=.1)
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')

clf = SVC(kernel='linear').fit(X, y)
plot_svc_decision_function(clf, plot_support=False);

y_hat=clf.predict(X) 
test_accuracy=metrics.accuracy_score(y,y_hat)*100
print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )





clf = SVC(kernel='rbf',C=10)  #change C and see
clf.fit(X, y)

plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')
plot_svc_decision_function(clf)
plt.scatter(clf.support_vectors_[:, 0], clf.support_vectors_[:, 1],
            s=300, lw=1, facecolors='none');

y_hat=clf.predict(X) 
test_accuracy=metrics.accuracy_score(y,y_hat)*100
print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )


#example 2

X, y = make_circles(100, factor=.1, noise=.3)
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')

clf = SVC(kernel='linear').fit(X, y)
plot_svc_decision_function(clf, plot_support=False);

y_hat=clf.predict(X) 
test_accuracy=metrics.accuracy_score(y,y_hat)*100
print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )





clf = SVC(kernel='rbf',C=10)  #change C and see
clf.fit(X, y)

plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')
plot_svc_decision_function(clf)
plt.scatter(clf.support_vectors_[:, 0], clf.support_vectors_[:, 1],
            s=300, lw=1, facecolors='none');

y_hat=clf.predict(X) 
test_accuracy=metrics.accuracy_score(y,y_hat)*100
print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )


#eample 3 polynomial
X, y = make_circles(100, factor=.1, noise=.1)
plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')

clf = SVC(kernel='linear').fit(X, y)
plot_svc_decision_function(clf, plot_support=False);

y_hat=clf.predict(X) 
test_accuracy=metrics.accuracy_score(y,y_hat)*100
print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )





clf = SVC(kernel='poly', degree=3,C=1)  #change degree = 2 and C and see
clf.fit(X, y)

plt.scatter(X[:, 0], X[:, 1], c=y, s=50, cmap='autumn')
plot_svc_decision_function(clf)
plt.scatter(clf.support_vectors_[:, 0], clf.support_vectors_[:, 1],
            s=300, lw=1, facecolors='none');

y_hat=clf.predict(X) 
test_accuracy=metrics.accuracy_score(y,y_hat)*100
print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(test_accuracy) )

def plot_svc_decision_function(model, ax=None, plot_support=True):
    """Plot the decision function for a 2D SVC"""
    if ax is None:
        ax = plt.gca()
    xlim = ax.get_xlim()
    ylim = ax.get_ylim()
    
    # create grid to evaluate model
    x = np.linspace(xlim[0], xlim[1], 30)
    y = np.linspace(ylim[0], ylim[1], 30)
    Y, X = np.meshgrid(y, x)
    xy = np.vstack([X.ravel(), Y.ravel()]).T
    P = model.decision_function(xy).reshape(X.shape)
    
    # plot decision boundary and margins
    ax.contour(X, Y, P, colors='k',
               levels=[-1, 0, 1], alpha=0.5,
               linestyles=['--', '-', '--'])
    
    # plot support vectors
    if plot_support:
        ax.scatter(model.support_vectors_[:, 0],
                   model.support_vectors_[:, 1],
                   s=300, linewidth=1, facecolors='none');
    ax.set_xlim(xlim)
    ax.set_ylim(ylim)
