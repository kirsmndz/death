/*
This program assists a teacher in calculating student grades at the end of the semester.
Written by: MKAM
Date written: 04/29/2022
Last modified: 04/29/2022
*/
#include <stdio.h>

int main(void)
{
    int grade;
    printf("\nEnter grade: ");
    scanf("%d", &grade);
    if ((grade >= 90) && (grade <= 100))
            printf("A\n");
    else if ((grade >= 80) && (grade <= 89))
        printf("B\n");
    else if ((grade >= 70) && (grade <= 79))
        printf("C\n");
    else if ((grade >= 60) && (grade <= 69))
        printf("D\n");
    else
        printf("F\n");
    return 0;
}