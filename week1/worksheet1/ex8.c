#include <stdio.h>
int main(){
    int a;
    printf("Enter an integer. \n");
    scanf("%d", &a);
    int i;
    int fact;
    for (i = 1; i <= a; i++){
        fact *= i;
    }
    printf("The factorial is %d. \n", i);
    return 0;
}