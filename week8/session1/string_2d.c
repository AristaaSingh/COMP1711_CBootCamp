#include <stdio.h>
#include <string.h>

// Function to read names and populate the 2D array
void readNames(char Names[][30], int maxNames) {
    int numNames;
    
    printf("Enter the number of names (up to %d): ", maxNames);
    scanf("%d", &numNames);
    // Consume the newline character left in the input buffer
    while (getchar() != '\n') {
        // Consume characters until a newline is encountered
    }

    for (int i = 0; i < numNames; i++) {
        printf("Enter full name %d (First Last): ", i + 1);

        // Read the full name with spaces
        fgets(Names[i], 30, stdin);

        // Replace the newline character with a null character
        Names[i][strcspn(Names[i], "\n")] = '\0';
    }
}

int main() {
    int maxNames = 5;
    char Names[maxNames][30]; // 2D array to store full names

    readNames(Names, maxNames);

    // Print the full names from the 2D array
    printf("Entered names:\n");
    for (int i = 0; i < maxNames; i++) {
        printf("%s\n", Names[i]);
    }
    return 0;
}