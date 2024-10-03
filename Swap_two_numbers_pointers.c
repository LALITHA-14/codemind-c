#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Before swap
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using pointers
    swap(&num1, &num2);

    // After swap
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
