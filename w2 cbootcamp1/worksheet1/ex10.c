#include <stdio.h>
int main(){
    float principal;
    float rate;
    float time;
    printf("Enter principal. \n");
    scanf("%f", &principal);
    printf("Enter rate per annum. \n");
    scanf("%f", &rate);
    printf("Enter time in years. \n");
    scanf("%f", &time);
    float si = (principal * rate * time) / 100;
    float amount = principal + si;
    printf("The final amount is %f. \n", amount);
    return 0;
}