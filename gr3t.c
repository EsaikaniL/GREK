//esaikani
#include <stdio.h>

int main(void)
{
	int n,a[100],c=0,Lnum,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{  
	    Lnum=n*i;
	    for(j=1;j<=n;j++)
	    {
		if(Lnum==a[j])
		{
		c++;
		}
	    }
	}
	printf("%d",c);
	return 0;
}
