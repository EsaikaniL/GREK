//esaikani
a=int(input())
h=int(input())
b=a*h
i=0
f=[]
while b>0:
    n=i*i
    f.append(n)
    i=i+h
    b=b-1
if a in f:
    print("yes")
else:
    print("no")/
