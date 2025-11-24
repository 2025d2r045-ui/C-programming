#include <stdio.h>

struct student {
    char name[50];
    int roll;
    int m1, m2, m3;
};

int main() {
    struct student s;
    FILE *fp;

    fp = fopen("marks.txt", "w");

    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Roll: ");
    scanf("%d", &s.roll);
    printf("Enter 3 Subject Marks: ");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    fprintf(fp, "%s %d %d %d %d", s.name, s.roll, s.m1, s.m2, s.m3);
    fclose(fp);

    fp = fopen("marks.txt", "r");
    fscanf(fp, "%s %d %d %d %d", s.name, &s.roll, &s.m1, &s.m2, &s.m3);

    printf("\n--- File Output ---\n");
    printf("Name: %s\nRoll: %d\nMarks: %d, %d, %d\n",
           s.name, s.roll, s.m1, s.m2, s.m3);

    fclose(fp);
    return 0;
}
