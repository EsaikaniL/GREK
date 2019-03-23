
//esaikani
#include <stdio.h>
 
int main(void) 
{
	int num,temp,sum=0;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
 
	}
	printf("%d",sum);
	return 0;
}
