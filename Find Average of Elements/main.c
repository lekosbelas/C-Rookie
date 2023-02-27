#include <stdio.h>

int main() {

    double numbers[5];
    
    double sum = 0.0;

    scanf("%lf", &numbers[1]);
    scanf("%lf", &numbers[2]);
    scanf("%lf", &numbers[3]);
    scanf("%lf", &numbers[4]);
    scanf("%lf", &numbers[5]);

    
    // get array input
    // find the sum of all elements
    for(int i = 0; i <= 6; i++){
        sum += numbers[i];
    }
    
    // find the average and print it
    sum /= 5;
    printf("%.2lf", sum);
    
    
    return 0;
}