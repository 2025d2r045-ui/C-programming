#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr1, *arr2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // malloc()
    arr1 = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++) arr1[i] = i+1;
    printf("Using malloc(): ");
    for(i = 0; i < n; i++) printf("%d ", arr1[i]);
    printf("\n");

    // calloc()
    arr2 = (int*)calloc(n, sizeof(int));
    for(i = 0; i < n; i++) arr2[i] = (i+1)*2;
    printf("Using calloc(): ");
    for(i = 0; i < n; i++) printf("%d ", arr2[i]);
    printf("\n");

    // free()
    free(arr1);
    free(arr2);

    return 0;
}
