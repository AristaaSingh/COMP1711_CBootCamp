#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
#define buffer_size 100

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

int file_to_struct(FILE *inputFile, FITNESS_DATA *dataArray)
{
    int counter = 0;
    char line[buffer_size];
    char date_temp[11];
    char time_temp[6];
    char steps_temp[10];
    while (fgets(line, buffer_size, inputFile))
    {
        tokeniseRecord(line, ",", date_temp, time_temp, steps_temp);
        strcpy(dataArray[counter].date, date_temp);
        strcpy(dataArray[counter].time, time_temp);
        int numsteps = atoi(steps_temp);
        dataArray[counter].steps = numsteps;
        counter++;
    }
    return counter;
}

// Complete the main function
int main() {

    char choice;
    char my_filename[100];
    int num_records;
    FILE *file_pointer;
    FITNESS_DATA my_records[500];

    while(1){
        printf("Menu options:\n");
        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the date and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Quit\n");
        printf("Enter Choice: ");
        scanf(" %c", &choice);

        switch(choice){

            case 'a':
            case 'A':
                printf("Input filename: ");
                scanf("%s", my_filename);
                file_pointer = fopen(my_filename, "r");
                if (file_pointer == NULL) {
                    printf("Error: Could not find or open the file.\n");
                    exit(1);
                }
                char line[buffer_size];
                num_records = file_to_struct(file_pointer, my_records);
                int i;
                for (i = 0; i < num_records; i++){
                    if (my_records[i].date == NULL){
                        printf("Error: Could not find or open the file.\n");
                        exit(1);
                    }
                    if (my_records[i].time == NULL){
                        printf("Error: Could not find or open the file.\n");
                        exit(1);
                    }
                    if (my_records[i].steps == 0){
                        printf("Error: Could not find or open the file.\n");
                        exit(1);
                    }
                }
                printf("File successfully loaded.\n");
                break;

            case 'b':
            case 'B':
                printf("Total records: %d\n", num_records);
                break;

            case 'c':
            case 'C':
                //int i;
                //int min = 100000;
                //int line_number;
                //for (i = 0; i < num_records; i++){
                //    if (my_records[i].steps < min){
                //       min = my_records[i].steps;
                //        line_number = i;
                //    }
                //printf("Fewest steps")
                //}
                return 0;
                break;
            
            case 'q':
            case 'Q':
                exit(0);
                break;
        }
    }
   
}









