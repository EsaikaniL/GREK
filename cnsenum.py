//esaikani
N=int(input())
a=(input()).split()
b=[]
for i in range(0,N):
    for j in range(i+1,N):
        b.append(max(a[i],a[j]))
    break
print(" ".join(b))
