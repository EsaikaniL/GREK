//esaikani
#include <stdio.h>
 
int main(void) 
{
	int n1,n2,sum;
	scanf("%d",&n1);
	scanf("%d",&n2);
	sum=n1+n2;
	if(sum%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
