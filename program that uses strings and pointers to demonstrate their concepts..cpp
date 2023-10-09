//program that uses strings and pointers to demonstrate their concepts.
#include <stdio.h>
int main() {
    // Define a string using an array of characters
    char myString[] = "Hello, World!";
    
    // Using array notation to access and print the characters of the string
    printf("Using array notation:\n");
    for (int i = 0; myString[i] != '\0'; i++) {
        printf("%c", myString[i]);
    }
    
    // Define a pointer to a character (string)
    char* ptr = "Hello, World!";
    
    // Using pointer notation to access and print the characters of the string
    printf("\n\nUsing pointer notation:\n");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    
    printf("\n");
    
    return 0;
}

