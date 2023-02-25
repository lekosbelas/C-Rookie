#include <stdio.h>

// create a function that checks if a number is armstrong
// prints the number is it is an armstrong number
// Hint: Look into the description above to find out the workflow of the checkArmstrong() function
int checkArmstrong(int number){

    int originalNumber, remainder, sum= 0;
    originalNumber = number;

    while(originalNumber != 0){
        remainder = originalNumber % 10;
        sum += remainder * remainder * remainder;
        originalNumber /= 10;
    }
    if(sum == number){
        printf("Armstrong %d\n", number);
    }
    return number;   
}

int main() {
  
    // get input values for x and y
    int x, y;
    scanf("%d %d", &x, &y);

    // run loop from x to y
    // call checkArmstrong() for each value from x
    while (x <= y) {
        checkArmstrong(x);
        ++x;
    }

    
    return 0;
}
