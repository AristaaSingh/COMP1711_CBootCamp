#include <stdio.h>

float sum (int a, int b)
{
    int answer;
    answer = a + b;
    return answer;
}

int main () 
{
    int y = 2;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %d is %f\n", y, z);
}