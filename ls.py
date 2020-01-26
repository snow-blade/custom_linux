import os
from stat import *
for el in os.listdir(): 
 print(str(el)+"\t"+str(os.stat(el)[ST_MODE])[-3:])
