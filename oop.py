#esaikani
n,m=map(int,input().split())
v=bin(n*m)
c=0
for x in range(0,len(v)):
    c=c+1
    if(v[x]=='1'):
        print(c)
        break
