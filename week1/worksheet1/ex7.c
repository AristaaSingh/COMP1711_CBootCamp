#include <stdio.h>
int main(){
    float fahr;
    printf("Enter the temperature in fahrenheit. \n");
    scanf("%f", &fahr);
    float celc;
    celc = ((fahr - 32) * 5) / 9;
    printf("The temperature in Celsius is %f. \n", celc);
    return 0;
}