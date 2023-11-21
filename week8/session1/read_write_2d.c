#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to initialize an array with random values
void initializeArrayRandom(int a[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = rand() % 10; // Generates random values between 0 and 10
        }
    }
}

// Function to multiply two arrays element-wise and store the result in a new array
void multiplyArrays(int a[3][4], int b[3][4], int c[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
}

// Function to print a 2D array
void printArray(int a[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[3][4];
    int B[3][4];
    int C[3][4];

    // Seed the random number generator with the current time
    srand(time(NULL));

    initializeArrayRandom(A);
    initializeArrayRandom(B);

    // multiply the two arrays A, B
    multiplyArrays(A, B, C);

    printf("Array A:\n");
    printArray(A);

    printf("Array B:\n");
    printArray(B);

    printf("Array C (result of element-wise multiplication):\n");
    printArray(C);

    return 0;
}