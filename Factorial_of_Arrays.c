#include <stdio.h>

// Function to calculate the factorial of a single number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    long long factorials[n];

    // Input the numbers
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate factorial for each number and store it in factorials array
    for (int i = 0; i < n; i++) {
        factorials[i] = factorial(numbers[i]);
    }

    // Output the factorials
    printf("Factorials of the numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("Factorial of %d is %lld\n", numbers[i], factorials[i]);
    }

    return 0;
}
