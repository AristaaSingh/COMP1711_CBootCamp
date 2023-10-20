#include <stdio.h>
int main(){
    printf("Enter an integer.\n");
    int num;
    scanf("%d", &num);
    if (num % 4 == 0 && num % 5 == 0){
        printf("Divisible by both 4 and 5.\n");
    }
    else {
        printf("Not divisible by both 4 and 5.\n");
    }
    return 0;
}