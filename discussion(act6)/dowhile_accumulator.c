/*
This program calculates the sum of a given sequence numbers: 1+2+3+4+5, using do-while loop.
Written by: MKAM
Date written: 04/30/2022
Last modified: 04/30/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, i;
    printf("\nDo-While Loop Accumulator");
    i = 1;
    sum = 0;
    do
    {
        printf("\n%d", i);
        sum = sum + i;
        i++;
    } while (i <= 5);
    printf("\nThe sum is %d.\n", sum);
    return 0;
}