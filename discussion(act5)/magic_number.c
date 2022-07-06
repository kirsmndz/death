/*
This program accepts the input magic number.
Written by: MKAM
Date written: 04/28/2022
Last modified: 04/28/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a magic number: ");
    scanf("%d", &number);
    if (number == 143)
        printf("I love you!\n");
    else
        printf("Sorry, better luck next time!\n");
    return 0;
}