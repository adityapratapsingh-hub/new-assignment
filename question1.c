#include <stdio.h>

// Function to print binary representation of a number
void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int num;

    // Input from the user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Print Binary representation
    printf("Binary: ");
    if (num == 0) {
        printf("0");
    } else {
        printBinary(num);
    }
    printf("\n");

    // Print Octal representation
    printf("Octal: %o\n", num);

    // Print Hexadecimal representation
    printf("Hexadecimal: %X\n", num);

    return 0;
}
