#esaikani
n,m=map(int,input().split())
v=bin(n*m)
count=0
for x in range(0,len(v)):
    if(v[x]=='1'):
    	count+=1
print(count)
 
