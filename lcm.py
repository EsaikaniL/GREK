//esaikani
a=int(input())
b=int(input())
n=int(input())
for i in range(1,n):
  if(a%i==0 and b%i==0):
    gcd=i
lcm=(a*b)/gcd
print(lcm)
