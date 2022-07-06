/*
This program determines if the input number is POSITIVE or NEGATIVE.
Written by: MKAM
Date written: 04/28/2022
Last modified: 04/28/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nEnter a number:");
    scanf("%d", &n);
    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
    return 0;
}