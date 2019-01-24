//esai
a=input()
b=list(str(a))
c=len(b)
e=0
while c>0:
    d=b[e]
    if d in ("0","1","2","3","4","5","6","7","8","9"):
        print("\n",b[e])
    e=e+1
    c=c-1
