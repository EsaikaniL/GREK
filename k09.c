//esaikani
#include <stdio.h>

int main(void)
{
	int i,t,j,m,a[50],sum=1,count=0;;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i]>a[j])
			{
			  count=count+1;
			}
		
		}
	
	}

	printf("%d",count);
return 0;
}
