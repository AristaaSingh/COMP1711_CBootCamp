#include <stdio.h>
int main(){
    int array1[3];
    int array2[3];
    printf("Enter elements for first array. \n");
    int i;
    for(i = 0; i < 3; i++){
        printf("Enter integer. \n");
        int item;
        scanf("%d", &item);
        array1[i] = item;
    }
    printf("Enter elements for second array. \n");
    for(i = 0; i < 3; i++){
        printf("Enter integer. \n");
        int item;
        scanf("%d", &item);
        array2[i] = item;
    }
    int array3[6];
    printf("The concatenated array is as follows: \n");
    for(i = 0; i < 3; i++){
        array3[i] = array1[i];
        printf("%d\n", array3[i]);
    }
    for(i = 3; i < 6; i++){
        array3[i] = array2[i - 3];
        printf("%d\n", array3[i]);
    }
    return 0;
}