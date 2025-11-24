#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Writing to file
    fp = fopen("demo.txt", "w");
    fprintf(fp, "Hello, this is a file example!");
    fclose(fp);

    // Reading from file
    fp = fopen("demo.txt", "r");
    fgets(text, 100, fp);
    printf("Data from file: %s\n", text);
    fclose(fp);

    return 0;
}
