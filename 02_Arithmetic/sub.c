#include<stdio.h>

int main()

{
	int n1, n2, sub;
	printf("Enter first number:");
	scanf("%d",&n1);

	printf("Enter second number:");
	scanf("%d",&n2);

	sub = n1 -n2;

	printf("The sub of %d and %d is: %d\n", n1, n2, sub);
	return 0;
}
