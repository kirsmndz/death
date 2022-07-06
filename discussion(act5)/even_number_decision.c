/*
This program determines if the input number is ODD or EVEN  number.
Written by: MKAM
Date written: 04/28/2022
Last modified: 04/28/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;
    printf("\nEnter a number:");
    scanf("%d", &number);
    if (number % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    return 0;
}