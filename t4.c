//esaikani
#include <stdio.h>

int main(void)
{
	int x,y,n,a[10],t;
	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
	scanf("%d",&a[x]);
	}
	for(x=n-1;x>=0;x--)
	{
	    if(x!=0)
	    printf("%d->",a[x]);
	    else
	    printf("%d",a[x]);
	}
			return 0;
}
