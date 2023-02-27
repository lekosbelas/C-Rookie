#include <stdio.h>

int main() {

    // create an integer array of size 5
    int numbers[5];

    // get input value for the array
    scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

    // create a variable smallest and assign first element of numbers to it
    int smallest = numbers[0];

    // run a for loop from i = 1 to i < 5
    // check if smallest is less than element at i
    for(int i = 1; i < 5; i++){
        if(smallest > numbers[i]){
            smallest = numbers[i];
        }
    }

    // print smallest
    printf("smallest is %d", smallest);

}