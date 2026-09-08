#include <stdio.h>

int main()
{
    float a, b, c, perimeter;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;

    printf("Perimeter of Triangle = %.2f", perimeter);

    return 0;
}
