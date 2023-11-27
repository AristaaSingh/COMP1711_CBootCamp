
#ifndef FITNESS_DATA_STRUCT_H
#define FITNESS_DATA_STRUCT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declaring variables so we can use them everywhere
#define buffer_size 100

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Helper function prototypes
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

FILE *open_file(char filename[], char mode[]) 
{
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file;
}

int file_to_struct(FILE *inputFile, FITNESS_DATA *dataArray)
{
    int counter = 0;
    char line[buffer_size];
	char date[11];
    char time[6];
    char steps[10];
    while (fgets(line, buffer_size, inputFile))
    {
        tokeniseRecord(line, ",", date, time, steps);
		strcpy(dataArray[counter].date, date); 
		strcpy(dataArray[counter].time, time);
		int stepsint = atoi(steps); // converted steps from string to integer form
        dataArray[counter].steps = stepsint; 
        counter++;
    }
    return counter;
}

#endif // FITNESS_DATA_STRUCT_H
