#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character:");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')

    {
        printf("The input is lower case letter:\n");

    }
    else
    {
             printf("The input is not a lower case letter:\n");
     }


    return 0;
}

