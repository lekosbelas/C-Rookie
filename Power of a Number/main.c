#include <stdio.h>

int main() {

    int number, power, result = 1;
    
    // get input value for number and power
    scanf("%d %d", &number, &power);

    // variable to store the power of a number
   
    
    // run a loop from 1 to power
    for(int i = 1; i <= power; i ++) {
        // inside loop multiply number with result
        result *= number;;
    } 

    // print the result
    printf("%d", result);

    return 0;
}