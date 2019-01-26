//esaikani
n,m=input().split()
n=int(n)
m=int(m)
ni=(list(map(int,input().split())))
li=[]
for i in ni:
    if(i!=m):
        li.append(i)
print(sorted(li))
