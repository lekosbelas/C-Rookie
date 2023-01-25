#include <stdio.h>
 
int main() {
 
  double total = 0;
 
  // get a number input
  double num;
  printf("Enter a number: ");
  scanf("%lf", &num);
 
  // loop runs until num is not equal to 0
  while (num != 0) {
 
    // add num to total
    total = total + num;
 
    // take input value for num again
    printf("Enter a number: ");
    scanf("%lf", &num);
  }
  
  printf("Result: %.2lf", total);
 
    return 0;
}