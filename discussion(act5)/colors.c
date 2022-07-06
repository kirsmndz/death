/*
This program displays an equivalent color once an input letter match its first character.
Written by: MKAM
Date written: 04/30/2022
Last modified: 04/30/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    printf("\nEnter a letter: ");
    scanf("%c", &letter);
    if ((letter == 'B') || (letter == 'b'))
        printf("Blue\n");
    else if ((letter == 'R') || (letter == 'r'))
        printf("Red\n");
    else if ((letter == 'G') || (letter == 'g'))
        printf("Green\n");
    else if ((letter == 'Y') || (letter == 'y'))
        printf("Yellow\n");
    else
        printf("Unknown Color\n");
    return 0;
}