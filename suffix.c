#include<stdio.h>
int main()
{
    char str[100];
    int i = 0, j, k, len = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    while (str[len] != '\0')
    {
        len++;
    }

    printf("All the possible substrings are:\n");
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\t"); 
        }
        printf("\n"); 
    }

    return 0;
}
