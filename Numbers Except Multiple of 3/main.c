#include <stdio.h>

int main() {
    
    // loop from 1 to 10
    // inside loop check whether i is divisible by 3
    for(int number = 1; number <= 10; number++){
        if (number % 3 != 0){
        printf("%d\n", number);
        }
    }
 
    return 0;
}