#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
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

// Complete the main function
int main() 
{
    char dataline[] = "2023-09-01,12:15,270";
    char my_delimiter = ',';

    char my_date[11];
    char my_time[6]; // Increased the size by 1 for null terminator
    char my_steps[8];

    tokeniseRecord(dataline, &my_delimiter, my_date, my_time, my_steps);
    
    printf("%s\n", my_date);
    printf("%s\n", my_time);
    printf("%s\n", my_steps);
    // To convert my_steps to integer and use it
    int steps_as_int = atoi(my_steps);
    printf("%d\n", steps_as_int);

}
