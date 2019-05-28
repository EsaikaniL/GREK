#ESaikani
n=int(input())
l=list(map(int,input().split()))
m=max(l)
c=0
g=[]
for i in range(m,1000):
    c=0
    for j in range(0,len(l)):
        if i%l[j]==0:
            c+=1
    if c==len(l):
        g.append(i)
s=min(g)
print(s)
