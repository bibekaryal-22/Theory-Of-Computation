#include<stdio.h>
int main()
{
    char str[100];
    int i=0,j,k,len=0;
    printf("Enter a string:\n");
    scanf("%s",str);
    while (str[i]!='\0')
    {
        i++;
        len++;
    }
    printf("ALl the possible substring are:\n");
    for(i=0;i<=len;i++)
    {
        for(j=i;j<len;j++)
        {
            for(k=i;k<=j;k++)
            {
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
}