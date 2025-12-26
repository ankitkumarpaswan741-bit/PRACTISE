//ANKIT KUMAR PASWAN 10214//
#include <stdio.h>

// Function to print right angle triangle of stars
void printTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter height of triangle: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}
/*Enter height of triangle: 
5
*
**
***
****
******/