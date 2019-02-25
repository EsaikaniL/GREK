//esaikani
#include <stdio.h>

int main()
{
    int i,m,p,q,r,max=0;
    scanf("%d%d%d%d",&m,&p,&q,&r);
    int a[m];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    printf("%d",p*max+q*max+r*max);
    return 0;
}
