#include <stdio.h>
#include <math.h>

int main()
{
    float side, area;

    printf("Enter side: ");
    scanf("%f", &side);

    area = (sqrt(3) / 4) * side * side;

    printf("Area of Equilateral Triangle = %.2f", area);

    return 0;
}
