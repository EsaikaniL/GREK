//esaikani
#include<stdio.h>
#include<string.h>
int main()
{
    char str[80], search[10];
    int count1 = 0, count2 = 0, i, j, flag;
    scanf("%s",str);
    scanf("%s",search);
    while (str[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("yes");
    else
        printf("no");

	return 0;
}
