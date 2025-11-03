/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,num,max;
    printf("Enter number1: ");
    scanf("%d", &max);
    for(i=2; i<=3; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num>max)
        max=num;
    }
    printf("Maximum is: %d\n", max);

    return 0;
}