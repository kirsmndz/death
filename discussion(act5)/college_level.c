/*
This program displays the college level of a student based on their year entry number.
Written by: MKAM
Date written: 04/30/2022
Last modified: 04/30/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nEnter your DLSU ID number: ");
    scanf("%d", &n);
    switch (n)
    {
    case 121:
        printf("What's up, Frosh!\n");
        break;
    case 120:
        printf("Heya, Sophomore!\n");
        break;
    case 119:
        printf("One more year, Junior!\n");
        break;
    case 118:
        printf("Graduating soon, Senior!\n");
        break;
    default:
        printf("Unknown!\n");
        break;
    }
    return 0;
}