//esaikani
#include <stdio.h>

int main(void) 
{
	int num;
	scanf("%d",&num);
	num+=1;
	while(num%10!=0)
	{
		num=num+1;
	}
	printf("%d",num);
	return 0;
}#include<stdio.h>

int main(void)

{

int num,i,flag=0;

scanf("%d",&num);

for(i=2;i<=num/2;i++)

{

if(num%i==0)

{

flag=1;

break;

}

}

if(flag==0)

{

printf("yes");

}

else

{

printf("no");

}

return 0;

}  
