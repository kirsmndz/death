/*
This program determines the highest value among the five input values.
Written by: MKAM
Date written: 05/26/2022
Last modified: 05/26/2022
*/
#include <stdio.h>
#include "my_header.h"

#define MAX_SIZE 5

int main(){
    float numbers[MAX_SIZE];
    //1. Get user-input for the five numbers
    printf("\n Enter five numbers: ");
    for (int i=0; i < MAX_SIZE; i++)
    {
        scanf("%f", &numbers[i]);
    }
    //2. Echo the values (debugging)
    display_array(numbers, MAX_SIZE);

    //3. Get and display the maximum
    printf("\n The maximum is %0.2f.", find_max(numbers, MAX_SIZE));
    return 0;
}