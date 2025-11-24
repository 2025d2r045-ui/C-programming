#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks[3];
    int total;
};

int main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        s[i].total = 0;
        for(j = 0; j < 3; j++) {
            printf("Enter marks of subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }

    printf("\nStudent Details with Total Marks:\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s, Roll: %d, Total Marks: %d\n", s[i].name, s[i].roll, s[i].total);
    }

    return 0;
}
