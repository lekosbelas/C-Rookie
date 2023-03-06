#include <stdio.h> 


int main(){ 

int numbers[4]= {5, 2, 4, 1};

int smallest = *numbers;

for(int i= 0; i < 4; i++){
    if(smallest > *(numbers + i)){
        smallest = *(numbers + i);
    }
}
printf("%d", smallest);


return 0;
}