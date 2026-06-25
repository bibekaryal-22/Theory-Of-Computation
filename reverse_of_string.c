#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i=0,len =0;
    printf("Enter the string 1:");
    scanf("%s",str1);
    while (str1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("%d\n",len);
    i=0;
    while (i<len)
    {
        str2[i]=str1[len-1-i];
        i++;
    }
    str2[i]='\0';
    printf("\n The reverse of the string : %s \n",str2);
    return 0;
}
