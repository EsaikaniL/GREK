//esaikani
n=input()
a=input()
b=input()
c=[]
for i in a:
    for j in b:
        if i==j:
            c.append(j)
print("".join(c))
