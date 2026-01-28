#include <stdio.h>
#include <ctype.h>  // for the tolower() function

// Function to count vowels in a string
int count_vowels(const char *str) {
    int count = 0;
    char ch;
    
    // Iterate through the string
    while ((ch = *str++)) {  // Continue until the null terminator
        ch = tolower(ch);  // Convert character to lowercase for case-insensitivity
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];
    
    // Take input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read a line of text

    // Count and display the number of vowels
    int result = count_vowels(str);
    printf("The number of vowels in the string is: %d\n", result);

    return 0;
}