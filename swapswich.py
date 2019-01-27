//esaikani
a=int(input())
n=input().split()
num=(list(map(int,input().split())))
print([num[i^1] for i in range(len(num))])
