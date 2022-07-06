/*
This program accepts a positive integer. The program should output the value of the summation.
Written by: MKAM
Date written: 04/28/2022
Last modified: 04/28/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. Initialization
    int number, i, sum;
    // Loop Body
    printf("Enter any positive integer: ");
    scanf("%d", &number);
    // 2. Terminating Condition, e.g. (i=0)
    i = 1;
    sum = 0;
    while (i <= number)
    {
        // 3. Increment
        sum += i; // could also be sum++ or sum = sum + 1
        i++;
    }
    printf("Value of the summation of %d: %d\n", number, sum);
    return 0;
}