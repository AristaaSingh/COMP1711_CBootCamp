#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main() {
    struct student students[3];

    // Hard-coded data
    strcpy(students[0].name, "Alice");
    strcpy(students[0].student_id, "1234567890");
    students[0].mark = 85;

    strcpy(students[1].name, "Bob");
    strcpy(students[1].student_id, "2345678901");
    students[1].mark = 78;

    strcpy(students[2].name, "Charlie");
    strcpy(students[2].student_id, "3456789012");
    students[2].mark = 90;

    // Output the data
    printf("Student data:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, ID: %s, Mark: %u\n", i+1, students[i].name, students[i].student_id, students[i].mark);
    }

    return 0;
}
