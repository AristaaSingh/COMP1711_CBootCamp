#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define buffer_size 100

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, char *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}

// function to read the file line by line and read the records into the struct of FITNESS_DATA type
int file_to_struct(FILE *inputFile, FitnessData *dataArray)
{
    int counter = 0;
    char line[buffer_size];
    char date_temp[11];
    char time_temp[6];
    char steps_temp[10];
    while (fgets(line, buffer_size, inputFile))
    {
        tokeniseRecord(line, ',', date_temp, time_temp, steps_temp);
        strcpy(dataArray[counter].date, date_temp);
        strcpy(dataArray[counter].time, time_temp);
        int numsteps = atoi(steps_temp);
        dataArray[counter].steps = numsteps;
        counter++;
    }
    return counter;
}

int main() {
    
    // defining variables needed throughout the function
    char my_filename[100];
    FILE *file_pointer;
    int num_records;
    FitnessData my_records[500];
    int i;

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
                
}
