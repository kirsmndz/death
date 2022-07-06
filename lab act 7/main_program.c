/*
This program accepts n numbers (maximum of 10) from the user's input, then provides the number of data points, sum, average, and standard deviation.
Written by: MKAM
Date written: 05/25/2022
Last modified: 05/26/2022
*/

// #include <stdio.h> // possible to exclude due to header inclusion
#include "statistics.h" // Custom header

int main()
{
    int values[MAXSIZE], intcount;
    // Get user input
    printf("Integer Count: ");
    scanf("%d", &intcount);
    if (intcount < 0 || intcount > 10)
    {
        printf("Invalid Count!");
        return 0;
    }
    printf("Plug-in %d integers here:", intcount);
    for (int i = 0; i < intcount; i++)
    {
        scanf("%d", &values[i]);
    }

    // array sum sample
    printf("\nThe sum is %0.2f.", array_sum(values, intcount));
    // array average
    printf("\nThe average is %0.2f.", array_average(values, intcount));
    // array standard deviation
    printf("\nThe standard deviation is %0.2f.", array_standev(values, intcount));
    return 0;
}
