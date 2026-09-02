#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n, result;

    printf("Enter number: ");
    scanf("%d", &n);

    result = sumDigits(n);

    printf("Sum of digits = %d", result);

    return 0;
}
