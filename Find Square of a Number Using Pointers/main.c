#include <stdio.h>

void findSquare(int* n) {

  int square = (*n * *n);
  *n = square;
}

int main() {
  int number;
  scanf("%d", &number);

  // call function by passing address of number
  findSquare(&number);
  
  printf("%d", number);

  return 0;
}