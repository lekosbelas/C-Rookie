#include <stdio.h>
 
void swapNumbers(int* n1, int* n2) {
  int temp;
 
  // swap values stored in n1 and n2
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
 
int main() {
 
  int number1 = 34;
  int number2 = 57;
 
  // call function by passing address of both variables
  swapNumbers(&number1, &number2);
 
  printf("After Swapping\n");
  printf("number1: %d\n", number1);
  printf("number2: %d", number2);
 
  return 0;
}