#include<stdio.h>

int main()

{
        float rad,circumference;
        const float pi = 3.14;

        printf("Enter the radius:");
        scanf("%f",&rad);

        circumference = 2 * pi * rad;

        printf("The circumference of circle %f", circumference);

        return 0;

}

