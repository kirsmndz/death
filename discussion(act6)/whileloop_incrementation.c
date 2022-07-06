/*
This program generates the given sequence: 1 2 3 4 5, using the while loop.
Written by: MKAM
Date written: 04/30/2022
Last modified: 04/30/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nWhile loop - Incrementation");
    n = 1;
    while (n <= 5)
    {
        printf("\n%d", n);
        n++;
    }
    printf("\n");
    return 0;
}