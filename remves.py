//esai
a=int(input())
d=a
h=0
b=int(input())
c=a*b
i=1
f=[]
while c>0:
    n=i*i
    f.append(n)
    i=i+1
    c=c-1
while a<b+1:
    if d in f:
        h=h+1
    d=d+1
    a=a+1
print(h)
© 2019 GitHub, Inc.
