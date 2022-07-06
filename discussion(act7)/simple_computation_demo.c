/*
This program uses one-dimensional array that loads or stores the 5 values into an array variable. The values are the resulting computation from a simple equation. Then display the stored values in the resulting array.
Written by: MKAM
Date written: 
Last modified:
*/
#include <stdio.h>
#define MAX_SIZE 5

void display_array(double array[MAX_SIZE]){
    for (int i=0; i<MAX_SIZE; i++)
    {
        printf("\narray[%d] = %0.2lf", i, array[i]);
    }
    return;
}

int main(){
    double scores [MAX_SIZE], results [MAX_SIZE];
    // Get user input
    // printf("Enter 5 integer values: ");
    for (int i=0; i<MAX_SIZE; i++)
    {
        printf("Enter score[%d] = ", i);
        scanf("%lf", &scores[i]);
    }

    // Echo the input
    display_array(scores);
    
    // Example of a simple computation: scores will be divided by 2
    // Computation
    for (int i=0; i<MAX_SIZE; i++)
    {
        results[i] = scores[i]/2;
    }
    printf("\n\nAfter dividing the scores by 2:");
    display_array(results);
    return 0;
}
