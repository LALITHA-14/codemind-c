#include <stdio.h>

// Function to calculate the sum using pointers
void sum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate sum using pointers
    sum(&num1, &num2, &result);

    // Output the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
