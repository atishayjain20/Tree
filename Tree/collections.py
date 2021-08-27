from collections import Counter
l1=[1,1,2,2,2,2,3,3,3,4]
di={
    1:'hello',
    2:'world',
    1:'Atishay'
}
co=Counter()
co.update(l1)
print(type(co))
di1={}
for key,value in co.most_common(2):
    print(key,value)