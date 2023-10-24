#include <stdio.h>
#include "utils.h"

int main () {
    char filename [] = "data.txt";
    FILE *file = open_file(filename, "w");

    fclose(file);
    return 0;
}