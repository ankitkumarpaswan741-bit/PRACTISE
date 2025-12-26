//ANKIT KUMAR PASWAN 10214//
#include <stdio.h>

int main() {
    int a, b, i;

    printf("Enter starting number (a): ");
    scanf("%d", &a);

    printf("Enter ending number (b): ");
    scanf("%d", &b);

    printf("Numbers from %d to %d:\n", a, b);

    // Using for loop
    for (i = a; i <= b; i++) {
        printf("%d\n", i);
    }

    return 0;
}
/* Enter starting number (a): 2
Enter ending number (b): 4
Numbers from 2 to 4:
2
3
4*/