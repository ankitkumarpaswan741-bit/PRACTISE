//Ankit kumar paswan 10214//
#include <stdio.h>

// Function to swap two numbers using pass by reference
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call swap function with addresses
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
/*Enter two numbers: 7
6
Before swapping: a = 7, b = 6
After swapping: a = 6, b = 7*/