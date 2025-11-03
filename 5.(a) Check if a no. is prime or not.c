
#include <stdio.h>

int main(){
    int num, i=2, flag=1;
printf("Enter Number: ");
scanf("%d", &num);
if(num<=1) {
    printf("Not Prime\n"); flag= 0;
}
while (i<=num/2){
    if (num%i==0){
        flag=0;
        break;
    }
    i++;
}
if(flag) { printf("%d is a prime number.", num);}
else{ printf("%d is not a prime number.", num);}


    return 0;
}