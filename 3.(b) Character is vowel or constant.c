
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if(ch=='a'|| ch=='e' ||ch=='i' ||ch=='o' || ch=='u')
    { printf("%c is the vowel",ch);
    }
    else 
    printf("%c is the constant", ch);

    return 0;
}