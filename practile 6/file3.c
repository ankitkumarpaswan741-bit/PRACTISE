//ANKIT KUMAR PASWAN 10214//
#include <stdio.h>

int main() {
    int pin, enteredPin;
    int attempts = 0, maxAttempts = 3;

    // Stored ATM PIN (you can change this)
    pin = 1234;

    while (attempts < maxAttempts) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("Authentication successful! Access granted.\n");
            return 0; // Exit program after success
        } else {
            printf("Incorrect PIN. Try again.\n");
            attempts++;
        }
    }

    printf("Too many failed attempts. Card blocked.\n");
    return 0;
}
/*Enter your ATM PIN: 8965
Incorrect PIN. Try again.
Enter your ATM PIN: 1234
Authentication successful! Access granted.*/