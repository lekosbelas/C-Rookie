#include <stdio.h>

int main() {

    double marks[8];
    double sum = 0;

    // get input values for the array
    for(int i=0; i<8; i++) {
        scanf("%lf", &marks[i]);
        sum += marks[i];
    }

    double totalMarks = 800;
    double percentage = (sum/totalMarks) * 100;

    printf("%.2lf", percentage);

    return 0;
}
