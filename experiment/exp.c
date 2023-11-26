#include <stdio.h>
#include "utils.h"

int main()
{
    int a;
    int b;
    printf("First number: ");
    scanf("%d", &b);
    printf("Second number: ");
    scanf("%d", &b);
    printf("%d\n", sumIntegers(a,b));
}