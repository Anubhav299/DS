
import pandas as pd
import numpy as np
from sklearn.feature_selection import SelectKBest


hf = pd.read_csv("Updated.csv")
hf
hf.columns
x = np.array(hf.iloc[:,:18])
x
y = np.array(hf.iloc[:,18])
y

from sklearn.model_selection import train_test_split
x_train, x_test,y_train,y_test=train_test_split(x,y,test_size=0.1,random_state = 6)

best_features = SelectKBest(k=15)
fit = best_features.fit(x_train,y_train)
df_scores = pd.DataFrame(fit.scores_)
df_columns = pd.DataFrame(hf.columns)
# concatenate dataframes
feature_scores = pd.concat([df_columns, df_scores],axis=1)
feature_scores.columns = ['Feature_Name','Score']  # name output columns
print(feature_scores.nlargest(15,'Score'))  # print 12 best features
# export selected features to .csv
df_univ_feat = feature_scores.nlargest(15,'Score')
df_univ_feat.to_csv('feature_selection_UNIVARIATE.csv', index=False)

