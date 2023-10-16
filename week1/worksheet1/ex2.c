#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    c = a + b;
    printf("The sum of the two numbers is %d. \n", c);
    return 0;
}