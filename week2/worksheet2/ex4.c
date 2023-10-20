#include <stdio.h>

int isPrime(int num){
    int i;
    int j = 0;
    for (i = 1; i <= num; i++){
        if (num % i == 0){
            j++;
        }
    }
    if (j == 2){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    printf("Enter an integer.\n");
    int a;
    scanf("%d", &a);
    printf("%d\n", isPrime(a));
    return 0;
}