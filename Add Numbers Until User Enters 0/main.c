#include <stdio.h>

int main() {

    int sum = 0;
    int number;

    // run a while loop that breaks only if input value is 0
    // if input value is other than 0, add it to sum
    scanf("%d", &number);
    
    while(number != 0){
        
    sum = sum + number;
        
    scanf("%d", &number);
    }

    // print the sum
    printf("%d", sum);

    return 0;
}