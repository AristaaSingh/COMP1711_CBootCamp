#include <stdio.h>
int main(){
    int my_array[5] = {1,2,3,4,5};
    int array_2[5];
    int i;
    for(i = 4; i >= 0; i--){
        array_2[4-i] = my_array[i];
    }
    int j;
    for(j = 0; j < 5; j++){
        printf("%d\n", array_2[j]);
    }
    return 0;
}