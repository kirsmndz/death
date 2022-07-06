/*
This program compute for your grade using the LBYEC2A Grade Computation.
Written by: MKAM
Date written: 04/21/2022
Last modified: 04/23/2022
*/
#include <stdio.h>

int main(void)
{
    // Declare variables
    float grade, labact, machprob, proj, pe1, pe2;
    // Input with prompt
    printf("Enter your scores for Lab Actities, Machine Problems, Project, Practical Exam 1, Practical Exam 2: \n");
    scanf("%f %f %f %f %f", &labact, &machprob, &proj, &pe1, &pe2);
    // Compute for each component
    grade = ((labact / 100) * 20) + ((machprob / 100) * 20) + ((proj/ 100) * 30) + ((pe1/ 100) * 15) + ((pe2 / 100) * 15);
    // Decision
    if (grade < 70)
        printf("Fail! Your Grade = %0.2f", grade);
    else
        printf("Pass! Your Grade = %0.2f", grade);
    return 0;
}