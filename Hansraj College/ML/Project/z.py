import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.model_selection import GridSearchCV
from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
df = pd.read_csv('Updated.csv')
x=df.drop(['HeartDisease','ChestPainType_NAP','RestingECG_ST','Scaled_RestingBP',
           'RestingECG_ST','RestingECG_Normal','ChestPainType_TA','RestingECG_LVH']
           ,axis=1)
y=df.iloc[:,18]
score_list= []

i=0
while i < 10:
    x_train, x_test,y_train,y_test=train_test_split(x,y,test_size=0.2)
    knn = KNeighborsClassifier()

    k_range = list(range(1, 11))
    weight = ['uniform', 'distance']
    ps=[1,2]
    param_grid = dict(n_neighbors=k_range,weights=weight,p=ps)
    grid = GridSearchCV(knn, param_grid, cv=10, scoring='accuracy')
    # fitting the model for grid search
    grid_search=grid.fit(x_train, y_train)
    print(grid_search.best_params_) 

    best_k=grid_search.best_estimator_.get_params()['n_neighbors'];
    best_w=grid_search.best_estimator_.get_params()['weights'];
    best_p=grid_search.best_estimator_.get_params()['p'];

    knn = KNeighborsClassifier(n_neighbors=best_k,weights=best_w,p=best_p);
    knn.fit(x_train, y_train)
    y_test_hat=knn.predict(x_test) 
    score_list.append(metrics.precision_score(y_test, y_test_hat))
    i+=1
    
print(score_list)
Pre = np.mean(score_list)*100
print("Accuracy for our testing dataset with tuning is : {:.2f}%".format(Pre) )