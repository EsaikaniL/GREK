#include <stdio.h>
 
int main(void) {
 
	int m,n,a[20],b[20],i,j,k,count=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				count++;
			}
		}
 
	}
	if(count==n)
		{
			printf("YES");
 
		}
		else{
			printf("NO");
		}
	return 0;
}
