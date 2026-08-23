#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf(" The number is not a Prime number:\n");
            return 0;

        }
    }

    printf(" The number is Prime number:\n");
    return 0;
}

