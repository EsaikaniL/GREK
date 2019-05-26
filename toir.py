#esaikani
s=input().split()
x=[]
for i in range(len(s)):
	if i!=0 and i!=len(s)-1:
		x.append(s[i][::-1])
	else:
		x.append(s[i])
print(*x)
