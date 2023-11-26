#include <stdio.h>
int main(){
    int array1[5] = {1,2,3,4,5};
    int array2[5];
    int i;
    for(i = 0; i < 5; i++){
        array2[i] = array1[4-i];
    }
    for (i = 0; i < 5; i++){
        printf("%d\n", array2[i]);
    }
    return 0;
}