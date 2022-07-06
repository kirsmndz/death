/*
This program demonstrates if-else conditional statements using the Richter's scale.
Written by: MKAM
Date written: 04/28/2022
Last modified: 04/28/2022
*/

#include <stdio.h>

int main(void)
{
    // 1. Variable declaration
    float level;
    // 2. User-input prompt and scan
    printf("\nEnter earthquake level: \n");
    scanf("%f", &level);
    // 3. Decision
    if (level < 5.0)
        printf("Little or no damage \n");
    else if ((level >= 5.0) && (level < 5.5))
        printf("Some damage \n");
    else if ((level >= 5.5) && (level < 6.5))
        printf("Serious damage \n");
    else if ((level >= 6.5) && (level < 7.5))
        printf("Disaster \n");
    else
        printf("Catastrophe \n");
    // Exit
    return 0;
}