#include <stdio.h>

int main()
{
    int a, b;
    int *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    if(*p == *q)
        printf("Both numbers are equal");
    else
        printf("Numbers are not equal");

    return 0;
}
