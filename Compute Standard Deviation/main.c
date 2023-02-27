#include <stdio.h>
#include <math.h>

// function to calculate standard deviation
double calculateSD(double data[]) {
    double sum = 0.0, mean, variance = 0.0, sd;
    int i;

    // find the sum of all the array elements
    for (i = 0; i < 5; i++) {
        sum += data[i];
    }

    // compute the mean of array elements
    mean = sum / 5.0;

    // find the difference of each array value and mean
    for (i = 0; i < 5; i++) {
        variance += pow(data[i] - mean, 2);
    }

    // compute the variance by dividing the result by 5.0
    variance /= 5.0;

    // compute the square root of variance
    sd = sqrt(variance);

    return sd;
}

int main() {
    int i;
    double data[5];

    // get input values for the array
    for (i = 0; i < 5; i++) {
        scanf("%lf", &data[i]);
    }

    // call calculateSD() with the array as argument
    double sd = calculateSD(data);

    // print the calculated standard deviation
    printf("%.3lf", sd);

    return 0;
}
