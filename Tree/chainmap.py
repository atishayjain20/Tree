from collections import ChainMap
from sys import stdin,stdout
di1={1:'apple'}
di2={2:'hello'}
di3={3:'world'}
cm=ChainMap(di1,di2,di3)
print(cm)
def getstring(): return stdin.readline().strip()
def getlist(): return list(map(int,(stdin.readline().strip().split())))
# n=getstring()
# stdout.write(n)
# li=getlist()
# print(li)
print("%6.2f"%(1.00002))
s=b'hello'
print(s)
d="hello".encode("ASCII")
print(d)

#operator overloading
class st:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def __add__(self,other):
        return self.a+other.a,self.b+other.b
ob1=st(4,5)
ob2=st(6,7)
ob3=ob1+ob2
print(ob3)
