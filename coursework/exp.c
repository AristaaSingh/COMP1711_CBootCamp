#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}


int main() {

    // defining variables needed throughout the program
    int i;
    FitnessData my_records[500];
    char filename[100];
    char line[100];
    int counter = 0;
    char steps_temp[10];

    // taking filename from user and opening it
    printf("Enter filename: ");
    scanf("%s", filename);
    FILE *file_pointer = fopen(filename, "r");

    // checking if file exists in directory
    if (file_pointer == NULL) {
        printf("Error: Could not find or open the file.\n"); 
        exit(1);
    }

    // putting the records into FitnessData structs
    while (fgets(line, 100, file_pointer)){
        tokeniseRecord(line, ",", my_records[counter].date, my_records[counter].time, steps_temp);
        my_records[counter].steps = atoi(steps_temp);
        counter++;
    }

    // checking the structs to see if the file has missing data or unexpected format
    for (i = 0; i < counter; i++){
        if (strlen(my_records[i].date) != 10){
            printf("Error: Could not find or open a file.\n");
            exit(1);
        }
        if (strlen(my_records[i].time) != 5){
            printf("Error: Could not find or open the file.\n");
            exit(1);
        }
        if (my_records[i].steps == 0){
            printf("Error: Could not find or open the file.\n");
            exit(1);
        }       
    }

    // creating new .tsv filename
    char *new_filename = strcat(filename, ".tsv");
    FILE *new_pointer = fopen(new_filename, "w+");
    
    
    
    
    

}
