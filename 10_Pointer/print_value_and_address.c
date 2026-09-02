#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void*)&a);
    printf("Value using pointer = %d\n", *p);
    printf("Address stored in pointer = %p\n", (void*)p);

    return 0;
}
