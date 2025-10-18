#include <stdio.h>
int main(){
    int c;
    float a,b;
    printf("1. Circle 2. Square 3. Rectangle: ");
    scanf("%d", &c);
    if (c==1){
        printf("Radius: ");
        scanf("%f", &a);
        printf("Area=%.2f\n", 3.14*a*a);
    } else if(c==2){
        printf("side: ");
        scanf("%f", &a);
        printf("Area = %.2f\n", a*a);
    } else if(c==3){
        printf("Length & Breadth: ");
        scanf("%f%f", &a, &b);
        printf("Area = %.2f\n", a*b);
    }else {
        printf("Invalid choice\n");
    }
    return 0;
}