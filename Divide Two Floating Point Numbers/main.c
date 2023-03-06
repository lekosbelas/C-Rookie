#include <stdio.h>

// function to divide two numbers
double* divideNumbers(double* n1, double* n2, double* result) {
  *result = *n1 / *n2;
  return result;
}

int main() {

  double number1;
  double number2;
  scanf("%lf %lf", &number1, &number2);
  
  double result;

  // call function with address as parameter
  double* total = divideNumbers(&number1, &number2, &result);
  printf("%.2lf", *total);

  return 0;
}
 
 
 
 
