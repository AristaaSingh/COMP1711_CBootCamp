#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main() {
    struct student students[3];

    // Predefined data arrays
    char *names[] = {"Alice", "Bob", "Charlie"};
    char *ids[] = {"1234567890", "2345678901", "3456789012"};
    unsigned marks[] = {85, 78, 90};

    // Populate the student array using a loop
    for (int i = 0; i < 3; i++) {
        strcpy(students[i].name, names[i]);
        strcpy(students[i].student_id, ids[i]);
        students[i].mark = marks[i];
    }

    // Output the data
    printf("Student data:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, ID: %s, Mark: %u\n", i+1, students[i].name, students[i].student_id, students[i].mark);
    }

    return 0;
}
