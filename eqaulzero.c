#include<stdio.h>
void main()
{
    int a[100],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]+a[j]==0)
            {
                printf("%d,%d\t",a[i],a[j]);
            }
        }
    }
}
