/*
This program generates the given sequence: 5 4 3 2 1.
Written by: MKAM
Date written: 04/30/2022
Last modified: 04/30/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nFor loop example - Decrementation");
    for (n = 5; n >= 1; n--)
    {
        printf("\n%d", n);
    }
    printf("\n");
    return 0;
}