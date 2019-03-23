
//esaikani
#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int n1,n2;
	scanf("%s",str1);
	scanf("%s",str2);
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1>n2)
	{
		printf("%s",str1);
	}
	else if(n2>n1)
	{
		printf("%s",str2);
	}
	else
	{
		printf("%s",str2);
	}
	return 0;
}
