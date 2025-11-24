#include <stdio.h>
#include <string.h>

union Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    union Student s;

    // Storing and displaying roll
    s.roll = 101;
    printf("Student Roll: %d\n", s.roll);

    // Storing and displaying name
    strcpy(s.name, "Pankaj");
    printf("Student Name: %s\n", s.name);

    // Storing and displaying marks
    s.marks = 95.5;
    printf("Student Marks: %.2f\n", s.marks);

    return 0;
}
