#include <stdio.h>

int main(void){
	int n,j,p;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			p=(a[i])|(a[j]);
		}
	}
	printf("%d",p);
	return 0;
}
