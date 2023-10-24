#include <stdio.h>

int main() {
    char filename [] = "data.txt";
    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    // w is write mode, it over-writes the file every time you run the program.
    // a is append mode, it appends new information at the end of the file to avoid losing previous data. 
    if (file == NULL) {
        perror("");
        return 1;
    }

    int number, num_lines = 10;
    printf("Type %d numbers: ", num_lines);
    for (int i = 0; i < num_lines; i++) {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
        // fprintf writes in the file.
        // because of the '\n' after %d in line 15, the file has one extra line at the end at the end of the content.
    }

    fclose(file);
    return 0;
}