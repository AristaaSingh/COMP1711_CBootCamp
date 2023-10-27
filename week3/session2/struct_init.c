#include <stdio.h>

struct student {
    char name [20];
    char student_id [10]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    // struct student is in the same league as 'int' or 'float', it is a type
    // new student is a variable of type struct student
    struct student new_student = {
        .name = "Name Surname", 
        .student_id = "28932123", 
        .mark = 35};
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}