#include <stdio.h>
 
int main() {
 
  // an array of numbers
  int numbers[5] = {55, 64, 75, 80, 65};
 
  // assign the first value of the array to the largest variable
  int largest = *numbers;
 
  // iterate each element of the array
  // if ith element is greater than largest
  // assign that element to largest
  for (int i = 1; i < 5; ++i) {
    if (largest < *(numbers + i)) {
      largest = *(numbers + i);
    }
  }
 
  printf("Largest: %d", largest);
 
  return 0;
}