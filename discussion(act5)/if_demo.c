/*
This program demonstrates if error.
Written by: MKAM
Date written: 
Last modified:
*/
#include <stdio.h>

int main ()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age); // this reads the user input
    if (age >=18)
        printf("You can Vote!");
    else
        printf("You CANNOT VOTE!");
    return 0;
}