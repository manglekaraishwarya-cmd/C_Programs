#include<stdio.h>

int main()
{
        float n1 ,n2 ,div;
        printf("Enter first floating point   number :");
        scanf("%f",&n1);

        printf("Enter second floating point number :");
        scanf("%f",&n2);

	if(num2 == 0.0f)
	{
		printf("Error: Division by zerois not allowed.\n);
	}
	else
	{
        div = n1 / n2;

        printf("The div of %.2f and %.2f is:%.2f\n",n1, n2, div);
	}

	return 0;
}


