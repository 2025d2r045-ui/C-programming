/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, r, sum=0, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num=n;
    while (n !=0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;}
        if(sum==num)
        printf("Armstrong number");
        else
        printf("Not Armstrong number");

    return 0;
}