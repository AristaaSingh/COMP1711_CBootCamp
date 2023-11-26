#include <stdio.h>
int main(){
    printf("Enter temperature in degrees Celsius.\n");
    int temp;
    scanf("%d", &temp);
    if (temp <= 40 && temp >= -10){
        printf("Temperature is between -10 and 40.\n");
    }
    else{
        printf("Temperature not between -10 and 40.\n");
    }
    return 0;
}