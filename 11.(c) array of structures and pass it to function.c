#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    int marks[3];
};

// Function to calculate total marks of a student
int totalMarks(struct Student s) {
    int total = 0;
    for(int i = 0; i < 3; i++)
        total += s.marks[i];
    return total;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for(int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        for(int j = 0; j < 3; j++) {
            printf("Enter marks of subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
        }
    }

    // Display total marks for each student
    printf("\nStudent Details with Total Marks:\n");
    for(int i = 0; i < n; i++) {
        printf("Name: %s, Roll: %d, Total Marks: %d\n", 
                s[i].name, s[i].roll, totalMarks(s[i]));
    }

    return 0;
}
