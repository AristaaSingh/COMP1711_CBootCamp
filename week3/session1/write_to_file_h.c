#include <stdio.h>
#include "utils.h"

int main () {
    char filename [] = "data.txt";
    FILE *file = open_file(filename, "w");

    int number, num_lines = 10;
    printf("Type %d numbers: ", num_lines);
    for (int i = 0; i < num_lines; i++) {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }

    fclose(file);
    return 0;
}