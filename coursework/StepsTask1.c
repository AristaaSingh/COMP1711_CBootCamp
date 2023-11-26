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
int main() {
   
    // creating the file pointer
    char filename[] = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }
    
    int record_count = 0; // for the number of records in the given csv file
    int buffer_size = 100; 
    // creating strings to store values from the tokeniseRecord function
    char date[11];
    char time[6];
    char steps[10];
    
    // creating a table fitness_data with a large number of rows (200 in this case)
    FITNESS_DATA fitness_data[500];
    // reading each line of the csv file one by one and copying it to the fitness_data table
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL){
        tokeniseRecord(line_buffer, ",", date, time, steps);
        strcpy(fitness_data[record_count].date, date); 
        // the value of date from tokeniseRecord function is copied to the table, to the row number being whatever the value
        // of record_count during this iteration is, to the field 'date' in the table.
        strcpy(fitness_data[record_count].time, time);
        // similarly copied the value of time from the tokeniseRecord output of the currently iterating row to the time field 
        int stepsint = atoi(steps); // converted steps from string to integer form
        fitness_data[record_count].steps = stepsint; // assigned the integer steps value to the steps field of the table
        record_count++; // every time one row finishes iterating, record_count becomes += 1
    }
    
    // final value of record_count gives the total number of records in the csv file
    printf("Number of records in file: %d\n", record_count);
    
    // printing the first 3 rows of the fitness_data table
    int i; 
    for (i = 0; i < 3; i++) {
        printf("%s/%s/%d\n", fitness_data[i].date, fitness_data[i].time, fitness_data[i].steps);
    }
    fclose(file);
    return 0;

}
