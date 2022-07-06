/*
This is the header file to the program that accepts n numbers (maximum of 10) from the user's input, then provides the number of data points, sum, average, and standard deviation.
Written by: MKAM
Date written: 05/25/2022
Last modified: 05/26/2022
*/
#include <stdio.h> // Built-in header needed by printf
#include <math.h>

#define MAXSIZE 10

float ave, sum, squared, division, sqroot;
int i;

float array_sum(int numbers[], int length)
{
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return sum;
}

float array_average(int numbers[], int length)
{
    ave = (sum / length);
    return ave;
}

float array_standev(int numbers[], int length)
{
    for (i = 0; i < length; i++)
    {
        squared += pow((numbers[i] - ave), 2);
    }
    division = squared / length;
    sqroot = sqrt(division);
    return sqroot;
}
