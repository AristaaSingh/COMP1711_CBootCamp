#include <stdio.h>

// declaring all the functions before hand is a great way to document how many functions you have in your program
// or to quickly check what parameters a particular function accepts


float sum(float a, float b);

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 2.11;
    float z = sum(5.11, y); // calling our new function

    printf ("The sum of 5.11 and %.2f is %.2f\n", y, z);

    return 0;
}