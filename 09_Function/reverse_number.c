#include <stdio.h>

int reverse(int n)
{
    int rev = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Reverse = %d", reverse(n));

    return 0;
}

