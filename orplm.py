#esai
n=int(input())
a=[int(n) for n in input().split()]
b=[]

b.append(a[0])
for i in range(1,len(a)):
    if b[-1]<a[i]:
        b.append(b[-1])
        
    else:
        b.append(a[i])
#b.remove(b[0])

for j in range(0,len(b)):
    print(b[j],end=" ")
