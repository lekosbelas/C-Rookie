#include <stdio.h>

int main() {
  
    int number;

    // get input value for number
    scanf("%d", &number);
    
    // run a for loop from i = 1 to i <= number
    // inside loop multiply factorial with i
    int factorial = 1;

    for(int i = 1; i <= number; i++){

    factorial = factorial * i;
    }
    // print factorial
    printf("%d",factorial);


    return 0;
    }