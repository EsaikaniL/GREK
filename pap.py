#esaikani
a,b=map(int,input().split())
s=[int(a) for a in input().split()]
c=0
for i in range(0,len(s)):
    if b==s[i]:
        c=c+1

if c==0:
    print("no")
else:
    print("yes",end=" ")
    print(c)
