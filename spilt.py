n=input()
a=[]
b=[]
for x in range(n):
	k=input()
	a.append(k)
q=int(input())
for x in range(q):
	k=input()
	b.append(k)
for x in b:
	k1=x.split(" ")[0].strip()
	k2=x.split(" ")[1].strip()
	ans=0
	for y in range(int(k1),int(k2)+1):
		ans=ans+int(a[y])
	print(ans)
