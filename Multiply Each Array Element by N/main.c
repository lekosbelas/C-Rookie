#include <stdio.h>

int main() {

    int primeNumbers[5] = {2, 3, 5, 7, 11};

    // get input value
    int number;
    scanf("%d", &number);

    // assign the address of number to a pointer
    int* pn = &number;

    for (int i = 0; i < 5; ++i) {
        // multiply each element of array by value at address pn
           *(primeNumbers + i)  = number * *(primeNumbers + i);
    }

    // print the array
    
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(primeNumbers + i));
    }

    return 0;
}