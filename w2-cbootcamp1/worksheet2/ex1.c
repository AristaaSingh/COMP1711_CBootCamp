#include <stdio.h>
int main(){
    int my_array[5] = {1,2,3,4,5};
    int i;
    int sum = 0;
    for(i = 0; i < 5; i++){
        sum = sum + my_array[i];
    }
    printf("The sum of the five integers is %d. \n", sum);
return 0;
}