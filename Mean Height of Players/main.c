#include <stdio.h>

int main(){
    
    double sum = 0.0;

    double height[11];

    // get input height
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &height[0], &height[1], &height[2], &height[3], &height[4], &height[5], &height[6], &height[7], &height[8], &height[9], &height[10]);
    
    // find the sum of all heights
    for(int i = 0; i < 12; i++){
        sum += height[i];
    }

    // find the mean and print it
    double mean = sum / 11;
    printf("%.2lf", mean);

}