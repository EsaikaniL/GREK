//esai
lis1,lis2,k=input().split(' ')
k=int(k)
c=0
for i in range(len(lis1)):
    if lis1[i]!=lis2[i]:
        c+=1
if c==k:print("yes")
else:print("no")
