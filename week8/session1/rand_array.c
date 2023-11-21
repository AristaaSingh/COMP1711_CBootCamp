#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][4];
    int i, j;

    // Seed the random number generator
    srand(time(NULL));
    // if instead of time(NULL) you place a random integer then the rand() function will only create random numbers 
    // according to that seed and everytime the program runs the random numbers from that particular seed will be fetched
    // that is, the numbers in rand() wont change. with time(NULL) the seed will change everytime. 

    // Assign random values to each element of the array
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            array[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }

    // Print the array to verify
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}