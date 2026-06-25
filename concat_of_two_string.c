#include<stdio.h>
int main()
{
    char str1[100],str2[100],str3[100];
    int i=0,j=0;
    printf("Enter the frist string:");
    scanf("%s",str1);
    printf("\nEnter the second string:");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
        j++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        str3[j]=str2[i];
        j++;
    }
    str3[j]='\0';
    printf("\nThe concatinated string :%s",str3);
    return 0;
}