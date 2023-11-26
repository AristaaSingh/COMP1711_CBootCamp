#include <stdio.h> 
#include <stdlib.h> // Defines exit().

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file;
}

int main() {
    char filename [] = "data.txt";
    FILE *file = open_file(filename, "r");

    int buffer_size = 30;
    char line_buffer[buffer_size];
    int i=0;
    while (fgets(line_buffer, buffer_size, file) != NULL && i<7) {
        printf("%s", line_buffer);
        i++;
    }

    fclose(file);
    return 0;
}