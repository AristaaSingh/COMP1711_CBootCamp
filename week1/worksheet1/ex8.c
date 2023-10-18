#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer. \n");
    scanf("%d", &num);
    int i;
    int fact = 1;
    for(i = 1; i <= num; i++){
        fact = fact * i;
    }
    printf("The factorial is %d. \n", fact);
}