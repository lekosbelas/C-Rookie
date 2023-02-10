#include <stdio.h> 
int main(){

    // get input value for number
    int number, sum = 0;
    scanf("%d", &number);

    // run while loop to access each digit of number
    while(number > 0){
    
    // use number % 10 to find digit of each number & add each digit to sum
    sum += number % 10;
    number /= 10;
}   
    // print the sum
    printf("%d", sum);

    return 0;
}