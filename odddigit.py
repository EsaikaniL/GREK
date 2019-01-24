a=int(input())
b=list(str(a))
c=len(b)
d=0
while c>0:
    if(int(b[d])%2==0):
        d=d+1
    else:
        print("\n",b[d])
        d=d+1
    c=c-1
