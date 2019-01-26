//esai
A=input()
A=list(A)
B=[]
for L in A:
    G=chr(ord(L)+3)
    B.append(G)
D=("".join(B))
print(D)
