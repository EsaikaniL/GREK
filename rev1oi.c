//Esaikani
#include<stdio.h>
 
int main()
{
    int i, p, limit, n;
    scanf("%d", &limit);
    printf("\n",limit);
 
    for(n=2; n<limit; n++)
    {
        p = 1;
        for(i=2; i<n; i++)
            if(n%i == 0)
            {
                p= 0;
                break;
            }
        if(p)
            printf(" %d ",n);
    }
 
    printf("\n");
    return 0;
}
