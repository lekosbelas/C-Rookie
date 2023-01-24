#include <stdio.h>

int main() {
  
    // create a variable and get input value
    int number;
    scanf("%d", &number);
    
    // check if the number is negative or positive or zero
    if(number < 0){
        printf("Negative Number");
    }
    else if(number > 0){
        printf("Positive Number");
    }
    else{
        printf("Zero Number");
    }
    return 0;
}