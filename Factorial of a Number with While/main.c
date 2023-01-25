#include <stdio.h>

int main(){

    int factorial = 1;

    int number;

    // get input value for number
    scanf("%d", &number);

    // run a while loop from number > 0
    // inside loop multiply factorial with number
    while(number > 0){
    factorial = factorial * number;
    number--;
    }
    // print factorial
    printf("%d\n", factorial);

    return 0;
    }