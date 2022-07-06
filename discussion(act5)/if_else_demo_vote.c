/*
This program determines if the input age is qualified to vote or not. The qualifying age is 18 years old and above.
Written by: MKAM
Date written: 04/28/2022
Last modified: 04/28/2022
*/
#include <stdio.h>

int main(void)
{
    // 1. Declare variables
    int age;
    // 2. Prompt and scan user input
    printf("\nEnter age: \n");
    scanf("%d", &age);
    // 3. Make a decision and print user feedback
    if ((age>=1) && (age<=100))
    {
        if (age >= 18)
            printf("Qualified to vote!\n");
        else
            printf("Too Young!\n");
    }
    else 
        printf ("Out of range! \n");
    return 0; // exit
}