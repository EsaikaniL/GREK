//esaikani
#include <stdio.h>
int main(void)
{
	int c=0,j=1,check=0,i;
	char a[100];
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='L')
		{
			c--;
			if(c==4||c==-4)
			{
				j++;
				c=0;
				check++;
			}
		}
		else if(a[i]=='R')
		{
			c++;
			if(c==4||c==-4)
			{
				j++;
				c=0;
				check++;
			}
		}
	}
	if(check>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
