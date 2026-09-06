#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int n, result;

    printf("Enter number: ");
    scanf("%d", &n);

    result = square(n);

    printf("Square = %d", result);

    return 0;
}
