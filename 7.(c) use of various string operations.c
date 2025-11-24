#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];

    // String length
    printf("Length of str1: %lu\n", strlen(str1));

    // String copy
    strcpy(str3, str1);
    printf("Copy of str1 into str3: %s\n", str3);

    // String concatenation
    strcat(str1, str2);
    printf("Concatenation of str1 and str2: %s\n", str1);

    return 0;
}
