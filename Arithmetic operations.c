#include <stdio.h>
int main (){
    int a, b, addition, subtraction, multiplication, remainder;
    printf("Enter the first no: ");
    scanf("%d", &a);
    printf("Enter the second no.: ");
    scanf("%d", &b);
    addition= a+b;
    subtraction=a-b;
    multiplication=a*b;
    remainder=a%b;
    printf("addition=%d \n", addition);
    printf("subtraction=%d \n", subtraction);
    printf("multiplication=%d \n", multiplication);
    printf("remainder=%d \n", remainder);
    return 0;
}