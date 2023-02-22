#include <stdio.h>

// function to check if a number is prime or not
void isPrime(int num) {
    int flag = 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("%d\n", num);
    }
}

int main() {
    int x, y;
    printf("Enter two numbers such that the second number is greater than the first: ");
    scanf("%d %d", &x, &y);
    printf("Prime numbers between %d and %d are:\n", x, y);
    for (int i = x; i <= y; i++) {
        isPrime(i);
    }
    return 0;
}
