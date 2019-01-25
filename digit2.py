//esai
n=int(input())
sum=0
if(n>1 and n<1000000000000000000):
	while(n!=0):
		r=n%10
		sum+=r*r
		n//=10
print(sum)
