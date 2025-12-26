//Ankit kumar paswan 10214//
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the limit (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Skip odd numbers using continue
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
/*Enter the limit (n): 
5
Sum of even numbers from 1 to 5 = 6*/