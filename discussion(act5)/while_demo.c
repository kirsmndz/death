/*
This program demonstrates the use of a while loop by printing #1-5.
Written by: MKAM
Date written: 04/28/2022
Last modified: 04/28/2022
*/
#include <stdio.h>

int main()
{
    // Initialization 
    int i = 1; 
    // Loop body
    // 2. Terminating Condition, e.g. (i <=5)
    while (i <= 5){
        printf("%d\n", i);
        // 3. Increment
        i = i + 1; // could also be i++ or i += 1
    }
    return 0;
}