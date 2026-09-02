#include<stdio.h>

int main()
{
	int a[5], i;

	printf("Enter 5 elements: ");

	for(i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	
	printf("Reverse array: ");
        
	for(i =4; i >= 0; i--)
		printf("%d\n", a[i]);

	return 0;
}
