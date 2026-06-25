#include<string.h>
#include<stdio.h>
int main()
{
    char str[100];
    int i =0;
    printf("Enter the string:\n");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("The length of the string is:%d",i);
return 0;
}