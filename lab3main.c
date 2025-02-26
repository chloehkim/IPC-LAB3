#include <stdio.h>
#include "lab3.h"
#include <ctype.h>

int isLower(char letter);

int main(void)
{
    char a;
    
    printf("enter anything:   \n");
    scanf("%c", &a);

    int answer = isLower(a);

    printf("isLower (%c) returns %d\n",a, answer);

    return 0;
}