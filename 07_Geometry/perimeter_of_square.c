#include <stdio.h>

int main()
{
    float side, perimeter;

    printf("Enter side: ");
    scanf("%f", &side);

    perimeter = 4 * side;

    printf("Perimeter of Square = %.2f", perimeter);

    return 0;
}

