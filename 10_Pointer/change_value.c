#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("Before = %d\n", a);

    *p = 50;

    printf("After = %d\n", a);

    return 0;
}
