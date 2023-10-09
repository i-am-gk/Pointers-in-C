#include <stdio.h>
int cubeByValue(int n);
int main() {
   int number = 5; // initialize number
   printf("The original value of number is %d", number);
// pass number by value to cubeByValue and store the result in a different variable    int result = cubeByValue(number);
   printf("\nThe new value of number is %d\n", result);
}
// calculate and return cube of integer argument
int cubeByValue(int n) {
  return n * n * n; // cube local variable n and return result
}

