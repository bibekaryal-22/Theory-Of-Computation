#include<stdio.h>
int main()
{
    char str[100],sstr[100];
    int i=0,j,k,len=0;
    printf("Enter the string:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
        len++;
    }
    printf("%d\n",len);
    for(i=0;i<len;i++)
    {
        for(j=1;j<len;j++)
        {
            for(k=1;k<=j;k++)
            {
                printf("%c",str[k]);
            }
            printf("\t");
        }
        break;
    }
    
}