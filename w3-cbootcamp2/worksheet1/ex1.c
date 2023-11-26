#include <stdio.h>
int main(){
    printf("Enter an integer.\n");
    int num;
    scanf("%d", &num);
    if (num < 0){
        printf("The number %d is negative.\n", num);
    }
    else if (num == 0){
        printf("The number is 0.\n");
    }
    else if (num > 0){
        printf("The number %d is positive.\n", num);
    }
    return 0;
}