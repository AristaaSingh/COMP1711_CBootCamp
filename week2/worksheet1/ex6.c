#include <stdio.h>
int main(){
    while (2 > 1){
        int num;
        printf("Enter an integer.\n");
        scanf("%d", &num);
        if (num == -1){
            printf("Program terminated.\n");
            break;
        }
        else if(num >= 0 && num <= 100){
            printf("Number is within the range.\n");
        }
        else{
            printf("Not a valid value.\n");
        }
    }
    return 0;
}