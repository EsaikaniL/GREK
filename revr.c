#include<stdio.h>
#include<stdio.h>
int minlen(int *arr,int n)
{
	int i,min;
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
}
int main()
{
	int n,len[5],min,count=0,i,j;
	char str[10][20],res[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		len[i]=strlen(str[i]);
	}
	min=minlen(len,n);
	for(i=0;i<min;i++)
	{
		for(j=0;j<n-1;j++)
		{
		    count=0;
			if(str[j][i]==str[j+1][i])
			count=1;
			else
			{
			count=0;
			break;
		    }
		}
		if(count==1)
		res[i]=str[0][i];
		else	
			{
			res[i]='\0';
			break;
			}
	}
	printf("%s",res);
return 0;	
}
