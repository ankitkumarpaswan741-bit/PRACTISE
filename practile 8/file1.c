//Ankit kumar paswan 10214//
#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // extract last digit and add
        n /= 10;        // remove last digit
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sumOfDigits(n);
    printf("Sum of digits of %d = %d\n", n, result);

    return 0;
}
/*Enter a number: 4562
Sum of digits of 4562 = 17*/