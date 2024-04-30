#include <stdio.h>

int main() {
    FILE *file = fopen("myfile.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    for (int i = 0; i < 2; i++){
    int ch = fgetc(file);
    if (ch != EOF) {
        printf("Character read: %c\n", (char)ch);
    } else {
        printf("End of file reached.\n");
    }
    }
    

    fclose(file);
    return 0;
}
