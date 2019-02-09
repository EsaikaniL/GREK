//esai
#include <stdio.h>
#include <string.h>
 
char str[100], sub[100];
int count = 0, count1 = 0;
 
int main()
{
    int i, j, l, l1, l2;
 
    scanf("%[^\n]s", str);
 
    l1 = strlen(str);
 
 
    scanf(" %[^\n]s", sub);
 
    l2 = strlen(sub);
 
    for (i = 0; i < l1;i++)
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            j++;
        }
    if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;  
    }
    printf("%d",count1);

	return 0;
}
        j++;
        i++;

    }

    a[j]='\0';

    l1=strlen(b);


    l2=strlen(a);

    if(l2>l1)
    {
        count=count+l2-l1;
        {
            for(i=0;i<l1;i++)
            {
                if(b[i]!=a[i])
                    count++;
            }
        }
    }
    else if(l1>l2)
    {
        count=count+l1-l2;
        for(i=0;i<l2;i++)
        {
            if(a[i]!=b[i])
                count++;
        }
    }
    else{
        for(i=0;i<l1;i++)
        {
            if(a[i]!=b[i])
                count++;
        }
    }
    printf("%d",count);
}
