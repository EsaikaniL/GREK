#esaikani
a=int(input())
b=bin(a)
count=0
for i in range(0,len(b)):
    if b[i]=="1":
        count=count+1 
print(count)
