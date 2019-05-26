#esaikani
n=input()
l=list(map(int,input().split()))
s=""
for i in range(1,len(l)):
    if l[i]%l[i-1]==0:
        s=s+str(l[i])+" "
print(s.strip())
