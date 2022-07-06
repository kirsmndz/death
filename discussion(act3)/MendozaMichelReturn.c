/*
This program demonstrates return values of a function.
Written by: MKAM
Date written: 04/21/2022
Last modified: 04/21/2022
*/

#include <stdio.h>

float feet2inches(float inches)
{
    return inches * 12;
}

int main()
{
    float feet;
    printf("Enter your value in feet: ");
    scanf("%f", &feet);
    printf("Conversion: %0.2ffeet=%0.2finches", feet, feet2inches(feet));
    return 0;
}