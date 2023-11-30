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

// function to read the file line by line and read the records into the struct of FITNESS_DATA type
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

    //defining variables needed throughout the program
    int i;
    int min = 100000;
    int max = 0;
    float mean_stepcount;
    int line_number;
    int period_start = 0;
    int final_period_start = 0;
    int period_length = 0;
    int final_period_length = 0;
    char choice;
    char my_filename[100];
    int num_records;
    FILE *file_pointer;
    FITNESS_DATA my_records[500];

    while(1){
        // printing menu for user interface
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
                // to print error message if file does not exist
                if (file_pointer == NULL) {
                    printf("Error: Could not find or open the file.\n"); 
                    exit(1);
                }
                char line[buffer_size];
                num_records = file_to_struct(file_pointer, my_records);
                // to print error message if any of the value in the file is missing (unexpected format)
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
                for (i = 0; i < num_records; i++){
                    if (my_records[i].steps < min){
                        min = my_records[i].steps;
                        line_number = i;
                    }
                }
                printf("Fewest steps: %s %s\n", my_records[line_number].date, my_records[line_number].time);
                break;

            case 'd':
            case 'D':
                for (i = 0; i < num_records; i++){
                    if (my_records[i].steps > max){
                        max = my_records[i].steps;
                        line_number = i;
                    }
                }
                printf("Largest steps: %s %s\n", my_records[line_number].date, my_records[line_number].time);
                break;

            case 'e':
            case 'E':
                for (i = 0; i < num_records; i++){
                    mean_stepcount += my_records[i].steps;
                }
                mean_stepcount = mean_stepcount / num_records;
                printf("Mean step count: %.0f\n", mean_stepcount);
                break;

            case 'f':
            case 'F':
                for (i = 0; i < num_records; i++){
                    if (my_records[i].steps >= 500) {
                        period_length++; // period length keeps increasing if steps are continuously above 500
                    } 
                    else {
                        // if the period length is the longest yet then set it as the final period length
                        if (period_length > final_period_length) {
                            final_period_length = period_length;
                            final_period_start = period_start;
                        }
                        period_length = 0;
                        period_start = i + 1; // defining the starting index for the period in the struct
                    }
                }
                printf("Longest period start: %s %s\n", my_records[final_period_start].date, my_records[final_period_start].time);
                printf("Longest period end: %s %s\n", my_records[final_period_start + final_period_length - 1].date, my_records[final_period_start + final_period_length - 1].time);
                break;

            case 'q':
            case 'Q':
                exit(0);
                break;

            // if the user types any other option
            default:
                printf("Invalid choice\n");
                break;
        }
    }
   
}









