#include <stdio.h>

int main() {

    // create a variable named correctNumber
    int correctNumber = 18;

    // get input for guessedNumber variable
    int guessedNumber;
    scanf("%d", &guessedNumber);

    // use if-else statement to check if the guess is correct or not
    if(guessedNumber == correctNumber){
    printf("Your guess is correct");
    }
    else if (guessedNumber > correctNumber){
    printf("Wrong, your guess is larger");
    }
    else{
    printf("Wrong, your guess is smaller");
    }
    return 0; 
    }