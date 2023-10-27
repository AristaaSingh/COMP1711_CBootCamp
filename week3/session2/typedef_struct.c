#include <stdio.h>

typedef struct {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
} student;

int main () {
    // Data generated using ChatGPT.
    int number_of_students = 10, i;
    student students[10];
    // initialised 10 students

    for (i = 0; i < number_of_students; i++){
        // sprintf prints into a string
        sprintf(students[i].name, "Student %i", i);
        sprintf(students[i].student_id, "0000000%i", i);
        students[i].mark = 35 + (13 * (i + 17) % 65); // mark
    }
    
    for (i = 0; i < number_of_students; i++) {
        printf("-------------\n");
        printf("Student name: %s\n", students[i].name);
        printf("Student ID: %s\n", students[i].student_id);
        printf("Final mark: %u\n", students[i].mark);
    }
    printf("-------------\n");
    return 0;
}