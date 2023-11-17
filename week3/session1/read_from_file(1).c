#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename [] = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        // what does fgets do?? 
        printf("%d\n", atoi(line_buffer));
    }

    fclose(file);
    return 0;
}