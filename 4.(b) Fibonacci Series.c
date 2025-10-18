#include <stdio.h>
int main(){
    int n, i;
    long long first=0, second=1, next;
    printf("Enter the number of terms: ");
     scanf("%d", &n);
     for (i=1; i<=n; i++)
         if(i==1){
         printf("%lld\n", first);
     }
     else if(i==2){
        printf("Fibonacci series: %lld", second);
     }
     else{
         next=first+second; 
         printf(",%lld", next);
     first= second; second= next;
}
return 0;
}