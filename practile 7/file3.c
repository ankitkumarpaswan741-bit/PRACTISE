//Ankit kumar paswan 10214//
#include <stdio.h>

int main() {
    int i, j;
    int n = 4;  // number of rows

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);  // print letters starting from A
        }
        printf("\n");
    }

    return 0;
}
/*A
AB
ABC
ABCD*/