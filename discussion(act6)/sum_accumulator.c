/*
This program calculates the sum of a given sequence numbers: 1+2+3+4+5.
Written by: MKAM
Date written: 04/30/2022
Last modified: 04/30/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, i;
    printf("\nThe use of accumulator");
    sum = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("\n%d", i);
        sum = sum + i;
    }
    printf("\nThe sum is %d.", sum);
    printf("\n");
    return 0;
}