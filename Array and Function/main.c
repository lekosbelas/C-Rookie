#include <stdio.h>

// function to find the average marks
double findAverage(double marks[5]) {
    double sum = 0.0;

    // find the sum of all elements using a for loop
    for(int i = 0; i < 5; i++){
        sum += marks[i];
    }
    

    // find the average by dividing sum by total number of array elements
    // Hint: Our array has 5 elements
    double average = sum / 5;

    return average;
}

int main() {

    double marks[5] = {54.8, 59.8, 48.7, 42.6, 60.1};

    // call the function with marks as argument
    double result = findAverage(marks);

    printf("%.2lf", result);

    return 0;
} 


