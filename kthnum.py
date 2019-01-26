a=[]
b=int(input())
n=int(input())
for i in range(1,b+1):
    c=input()
    a.append(c)
a.sort()
print(a[n-1])
