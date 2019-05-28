#ESaikani
a=int(input())
lst=[]
for i in range(2,a):
    if a%i==0:
        lst.append(i)

for i in lst:
    for j in range(2,i):
        if i%j==0:
            break
    else:
        print(i,end=" ")
