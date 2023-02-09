#include <stdio.h>

int main() {
    
    // get input for number
    int number, sum = 0;
    scanf("%d", &number);

    // variable to store sum of all divisors
    
    int n = number;
  
        
        // check if i is divisor of number
        while (n > 0) {
            // if true, add i to sum
            sum += n % 10;
            n /= 10;
        }
    

    // check if sum is greater than number
    if (number % sum == 0) {
        printf("Abundant Number");
    } 
    else {
        printf("Not an Abundant Number");
    }
    
    return 0;
}