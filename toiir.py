#esaikani
def fact(n):
    c=1
    for i in range(1,n+1):
        c=c*i
    return c
a,b=map(int,input().split())
print(fact(a)//fact(b))
