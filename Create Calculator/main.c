#include <stdio.h>

int main() {
  
    // get input value for operator
    char op;
    scanf("%c", &op);
    
    // get input value of first and second
    double first, second;
    scanf("%lf %lf", &first, &second);
    
    switch(op) {
    case '+':
    printf("%.1lf", first + second);
    break;
   
    case '-':
    printf("%.1lf", first - second);
    break;

    case '*':
    printf("%.1lf", first * second);
    break;

    case '/':
    printf("%.1lf", first / second);
    break;
        default:
            printf("Invalid Operator!");
    }

    return 0;
}