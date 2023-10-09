#include <stdio.h>
int main() {
  int y = 5;
  int *xPtr = &y; // xPtr points to the memory location of y
  // Input using pointer
  printf("Enter a value: ");
  scanf("%d", xPtr); // Read the input value and store it in the memory
  // location pointed by xPtr
 // Output the updated value of y using pointer
  printf("The updated value of y: %d\n", *xPtr);
  return 0;
}

