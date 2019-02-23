//esaikani
#include <stdio.h>
 
int main() {
	int a,b,c,d=0,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=i/10;
		c=i%10;
		if(b==2)
		   d++;
		   if(c==2)
            d++;
 
	}
	printf("%d",d);
 
	return 0;
}
