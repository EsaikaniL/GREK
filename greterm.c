#include <stdio.h>

int main(void) {
	int n,a,b,i,c[10],sum=0;
	scanf("%d %d %d",&n,&a,&b);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++)
	{
	  if(c[i]==a)
		sum=sum+c[i];
	}
		if(b>=sum)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	return 0;
}
