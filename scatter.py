import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D


#read csv
df = pd.read_csv('https://pastebin.com/raw/uVaaT9Pe', sep = '\s+')
#drop *if* columns(mine's speed)
df.drop(columns=['speed'])

threedee = plt.figure().gca(projection='3d')
threedee.scatter(df['density'], df['flow-longtitude'], df['flow-latitude'])
threedee.set_xlabel('density')
threedee.set_ylabel('flow-longtitude')
threedee.set_zlabel('flow-latitude')
plt.show()
