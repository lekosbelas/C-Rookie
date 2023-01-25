#include <stdio.h>

int main() {
     
    // create a number variable
    int j;
    
    int k = 1;

    // take input value for number
    scanf("%d", &j);
  
    // use while loop to run from 1 to 10
    // print multiplication table inside the while loop
    int count = 1;
    while(count <= 10){
        k = j * count;
        printf("%d * %d = %d\n",j, count, k);
        count++;
    }
    return 0;
}