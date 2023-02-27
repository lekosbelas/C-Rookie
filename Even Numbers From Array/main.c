#include <stdio.h>

int main(){

    // variable to track position of evenNumbers
    int a = 0;

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int evenNumbers[10];
    
    // run a for loop to access each element of numbers
    for(int i = 0; i < 10; i++){

        // check if ith element of number is even
        // if true, add the element to the jth position of evenNumbers
        // increase value of j by 1
        if(numbers[i] % 2 == 0){
            evenNumbers[a] = numbers[i];
            a++;
        }
    }
    
    // run a for loop from 0 to j to print even numbers
    for(int i = 0; i < 5; i++){
        printf("%d\n", evenNumbers[i]);
    }



    return 0;
}