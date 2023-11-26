#include <stdio.h>

int main () {
    char filename [] = "data.txt";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    // fopen produces a file pointer
    if (file == NULL) {
        perror("");
        // perror is a function which prints the last error
        return 1;
    }

    fclose(file);
    return 0;
}