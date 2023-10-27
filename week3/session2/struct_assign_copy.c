#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char mark_t;
// it just gives an alias mark_t to the data type 'unsigned char'

typedef struct {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    mark_t mark;
} student;

int main () {
    int n = 3;
    student students [] = {
        {}
    }
    strcpy(new_student.name, "Name Surname");
    strcpy(new_student.student_id, "13902178");
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    // every time the code is compiled and run, the value for mark keeps changing. 
    // to fix this we can initialise just one field, in this case, mark, and leave the other ones for the later part of the code.
    return 0;
}