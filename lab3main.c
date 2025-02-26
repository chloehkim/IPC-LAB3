#include <stdio.h>
#include "lab3.h"
#include <ctype.h>

int isLower(char letter);

int main(void)
{
    char a,b;
    
    printf("enter anything:   \n");
    scanf("%c", &a);

    int answer = isLower(a);

    printf("isLower (%c) returns %d\n",a, answer);

    printf("enter any letter:   \n");

    scanf("  %c", &b);

    char U = toUpper(b);

     printf("toUpper %c returns %c\n", b, U);

     return 0 ;
}