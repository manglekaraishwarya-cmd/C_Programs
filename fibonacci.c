#include <stdio.h>

int main() {
    int n;
    // Initialize the first two terms of the series
    unsigned long long t1 = 0, t2 = 1;
    unsigned long long nextTerm;

    // Ask user for the number of terms
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        // Print the current term
        printf("%llu", t1);

        // Add a comma after terms, except for the last one
        if (i < n) {
            printf(", ");
        }

        // Calculate the next term and update variables
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}


