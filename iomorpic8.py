//esai
a=input()
b=list(a)
c=len(b)
i=0
j=1
while c>0:
    d=b[i]
    b[i]=b[j]
    b[j]=d
    i=i+2
    j=j+2
    c=c-2
print("".join(b))
