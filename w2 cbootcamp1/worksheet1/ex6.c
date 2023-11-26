#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer. \n");
    scanf("%d", &num);
    int b = num % 2;
    if (b == 0){
        printf("The number is even. \n");
    }
    else{
        printf("The number is odd. \n");
    }
    return 0;
}