
//esaikani
#include <stdio.h>
 
int main(void) 
{
	int num,even;
	scanf("%d",&num);
	if(num%2==0)
	{
		even=num;	
	}
	else
	{
		even=num-1;
	}
	printf("%d",even);
	return 0;
}
