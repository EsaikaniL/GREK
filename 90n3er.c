//esai
#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50];
	int i,flag=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}
	return 0;
}
