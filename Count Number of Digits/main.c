#include <stdio.h>

int main() {
  
    int number, count = 0;


    // get input value for number
    scanf("%d", &number);

    // loop through the integer to calculate the number of digits
    while (number > 0) {
    count++;
    number /= 10;
  }

    // print the number of digits
    printf("%d", count);
    
    return 0;
}