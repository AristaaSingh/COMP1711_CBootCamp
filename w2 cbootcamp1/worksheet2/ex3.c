#include <stdio.h>
int main(){
    printf("Enter how many numbers you want in your array.");
    int a;
    scanf("%d", &a);
    int array_1[a];
    int i;
    for(i = 0; i < a; i++){
        printf("Element at index %d. \n", i);
        int element;
        scanf("%d", &element);
        array_1[i] = element;
    }
    int max = 0;
    int j;
    for (j = 0; j < a; j++){
        if (array_1[j] > max){
            max = array_1[j];
        }
        else{
            continue;
        }
    }
    printf("The maximum number is %d. \n", max);
    return 0;
}