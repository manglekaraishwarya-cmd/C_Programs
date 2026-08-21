#include<stdio.h>

int main()
{
	int n1 ,n2 ,sum;
	printf("Enter first number :");
	scanf("%d\n",&n1);

	printf("Enter second number :");
	scanf("%d\n",&n2);

	sum = n1 + n2;

	printf("The sum of %d and %d is:%d\n",n1, n2, sum);
        return 0;
}
