#include <stdio.h>

int main() {
    double marks;

    // get input value for marks
    scanf("%lf", &marks);

    // check the value of marks and assign grade based on the value
    if(marks >= 90){
        printf("A");
    }
    else if(marks >= 80){
        printf("B");
    }
    else if(marks >= 70){
        printf("C");
    }
    else{
        printf("D");
    }
    return 0;
}