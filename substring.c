#include<stdio.h>
int main()
{
    char str[100],str2[100];
    int i,j,len;
    printf("Enter the string:\n");
    scanf("%s",str);
    printf("Strarting position:");
    scanf("%d",&i);
    printf("Length:\n");
    scanf("%d",&len);
    j=0;
    for(i=0;len>=0;len--)
    {
        str2[j]=str[i+1];
        j++;
    }
    printf("\n The substring of the string is : %s\n",str2);
    return 0;
}