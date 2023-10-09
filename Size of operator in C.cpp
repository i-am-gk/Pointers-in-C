#include <stdio.h>

int main() {
    int x = 10;
    char c = 'A';
    double d = 3.14;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of x: %zu bytes\n", sizeof(x));
    
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of c: %zu bytes\n", sizeof(c));

    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of d: %zu bytes\n", sizeof(d));

    printf("Size of expression (x + d): %zu bytes\n", sizeof(x + d));

    return 0;
}

