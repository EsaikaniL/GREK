#include<stdio.h>
#include<stdio.h>
int main()
{
int n,i,k=0,j;
  char a[100],b[100];
  scanf("%[^\n]%*c",&a);
  
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    scanf("%[^\n]%*c",a[i]);
    
  }
	if(a[0]==a[n-1])
	n=n-1;
	for(i=0;i<n;i++)
	printf("%c",a[i]);
return 0;
}
