/*
This program works out the sum, average and sum of the squares of four numbers.
Written by: MKAM
Date written: 04/21/2022
Last modified: 04/23/2022
*/
#include <stdio.h>

float add(float w, float x, float y, float z)
{
    return w + x + y + z;
}

float ave(float w, float x, float y, float z)
{
    return (w + x + y + z) / 4.0;
}

float sumsquare(float w, float x, float y, float z)
{
    return ((w * w) + (x * x) + (y * y) + (z * z));
}
int main()
{
    // Declare variables
    int w, x, y, z;
    // Input with prompt
    printf("Input 4 numbers: \n");
    scanf("%d %d %d %d", &w, &x, &y, &z);
    printf("Sum of the four numbers = %0.0f.\n", add(w, x, y, z));
    printf("Average of the four numbers = %0.2f.\n", ave(w, x, y, z));
    printf("Sum of the squares of the four numbers = %0.0f.\n", sumsquare(w, x, y, z));
    return 0;
}