#include <stdio.h>

// function to add 10 to a number
int* addTen(int* a) {
  *a = *a + 10;
  return a;
}

int main() {

  int number = 32;

  // call function
  int* result = addTen(&number);
  printf("Result: %d", *result);

  return 0;
}