
//esaikani
#include <stdio.h>

int main(void) 
{
	int i,n,array[50],sum=0,avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	avg=sum/n;
	printf("%d",avg);
	return 0;
}
