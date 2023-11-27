#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


// Complete the main function
int main() {

    FITNESS_DATA step_records[1000];
    char choice;
    char line[buffer_size];
    char *filename;
    int record_count;

    while(1){
        printf("Menu Options:\n");
        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the data and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Quit\n\n");
        printf("Enter Choice: ");

        // get the next character typed in and store in variable 'choice'
        choice = getchar();
        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');

        // switch statement to control the menu.
        switch (choice){
            case 'A':
            case 'a':
                printf("Input filename: ");
                scanf("%s", filename);
                FILE *file = fopen(filename, "r");
                if (file == NULL) {
                    perror("");
                    exit(1);
                }
                fclose(file);

            case 'B':
            case 'b':
                
                break;

        }
    }
}









