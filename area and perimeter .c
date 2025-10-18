#include <stdio.h>
#define PI 3.14159
int main(){
    float radius, length, breadth, side;
    float area, perimeter;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("Circle -> Area: %.2f, perimeter: %.2f\n", area, perimeter);
    printf("Enter length and breadth of rectangle: ");
    scanf("%f%f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Rectangle -> Area: %.2f, perimeter: %.2f\n", area, perimeter);
    printf("Enter side of square: ");
    scanf("%f", &side);
    area = side * side;
    perimeter = 4 * side;
    printf("Square -> Area: %.2f, perimeter: %.2f\n", area, perimeter);
    return 0;
    
}