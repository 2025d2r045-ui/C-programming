#include <stdio.h>

// Functions
float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return b!=0 ? a/b : 0; }

int main() {
    float n1, n2, res;
    int ch;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);
    
    printf("1.Add 2.Sub 3.Mul 4.Div\nEnter choice: ");
    scanf("%d", &ch);
    
    switch(ch){
        case 1: res = add(n1,n2); break;
        case 2: res = sub(n1,n2); break;
        case 3: res = mul(n1,n2); break;
        case 4: 
            if(n2==0){ printf("Cannot divide by zero\n"); return 0; }
            res = divi(n1,n2); 
            break;
        default: printf("Invalid choice\n"); return 0;
    }
    
    printf("Result: %.2f\n", res);
    return 0;
}
