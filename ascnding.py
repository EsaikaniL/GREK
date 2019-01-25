//esai
a=input()
b=list(str(a))
c=len(b)
d=b[0]
i=0
while (c>0):
    if(d<b[i]):
        print("\n",i+1)
        break
    i=i+1
    c=c-1
