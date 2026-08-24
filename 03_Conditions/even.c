#include <stdio.h>

int main() {
    int num;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}


