#ESaikani
n,k=map(int,input().split())
s=""
l=list(map(int,input().split()))
l.sort()
for i in l:
	if l.count(i)<k:
		s=s+str(i)+" "
print(s.strip())
