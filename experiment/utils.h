// .h is a header file

#ifndef UTILS_H
#define UTILS_H

// line 1 and 2 will prevent double declaration of the functions

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Gives the sum of two integers
 * @param a First integer
 * @param b Second integer
 * @return int Returns the sum integer
*/
int sumIntegers(int a, int b){
    int c;
    c = a + b;
    return c;
}

#endif /* UTILS_H */