/* 
Problem Description

Create a function to check if a number is a Perfect Number.

A perfect number is a number which is equal to the sum of its positive divisors. For example, 6


Divisor of 6: 1, 2, 3

Sum of divisor: 1 + 2 + 3 = 6

Create a findSum() function that takes an integer number as its parameter.

Inside the function, create the sum variable with initial value 0.

Run a for loop from i = 1 to i < number.

Inside the loop, check if the number is divisible by i.

If true, add i to sum.

Return the value of sum.

Inside main(), get an integer input value for the number variable.

Call the findSum() function with argument
number to find the sum of all of the divisors of the number.

Compare the returned value with the initial number.

If the returned result is equal to the number, print Perfect Number. Otherwise, print Not a Perfect Number.




*/

#include <stdio.h>

// function to find the sum of divisors
int findSum(int number) {
    int sum = 0;

    // run a for loop to find the sum of all divisors
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
        }
    }

    return sum;
}

int main() {

    // get input value for number
    int number;
    scanf("%d", &number); 

    // call the findSum() function with argument number
    int result = findSum(number);

    // if result is equal to number, print Perfect Number. Otherwise, print Not a Perfect Number.
    if(result == number){
        printf("Perfect Number");
    }
    else{
        printf("Not a Perfect Number");
    }
    
    return 0;
}