//esai
#include <stdio.h>

int main(void) 
{
int x,y,remainder,gcd;
scanf("%d",&x);
scanf("%d",&y);
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}
while(remainder!=0);
gcd=y;
printf("%d",gcd);
return 0;
}
