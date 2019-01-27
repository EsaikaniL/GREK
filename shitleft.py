import numpy as np
n=int(input())
if(n<=100000):
    ni=(list(map(int,input().split())))
    for i in range(0,n):
        for j in range(i+1,n):
            p=np.bitwise_xor(ni[i],ni[j])
print(p)
