//esai
n,m=input().split()
n=int(n)
m=int(m)
s=0
for i in range(n,m):
    if(i%2!=0):
        s=s+i
print(s)
