#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter a number. \n");
    scanf("%d", &a);
    printf("a = %d\n", a);
    printf("Enter a number. \n");
    scanf("%d", &b);
    printf("b = %d\n", b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("-------------------------------- \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}