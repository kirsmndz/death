/*
This program asks the user to input a matrix, at most 3 x 3, but the dimensions could be 2x3, 1x3, etc.,  performs (1) addition and (2) transpose operations defined in header, then stores the result in another matrix and displays it.
Written by: MKAM
Date written: 06/09/2022
Last modified: 06/09/2022
*/
#include <stdio.h>
#include "my_matrix.h"

int main()
{
    double matrix_1[MAX_ROWS][MAX_COLUMNS], matrix_2[MAX_ROWS][MAX_COLUMNS], resulting_Matrix[MAX_ROWS][MAX_COLUMNS], sum_Matrix[MAX_ROWS][MAX_COLUMNS];
    int option, row, col;

    // Ask for user input
    input();

    // Element Input for Matrix
    elementInput(matrix_1);

    // Invalid elementInput
    if (rowInput > 3 || colInput > 3)
    {
        printf("Invalid!");
        return 0;
    }

    // Display First Matrix
    printf("\nFirst Matrix: \n");
    displayMatrix(matrix_1);
    printf("\n========================\n"
           "     Matrix Options\n"
           "========================\n"
           "(1) Add another Matrix\n"
           "(2) Transpose the Matrix\n");
    printf("\nSelect the option you'd like to perform: ");
    scanf("%d", &option);

    // Addition Option
    if (option == 1)
    {
        // Ask user input
        input();

        // Element Input for Matrix
        elementInput(matrix_2);

        // Invalid elementInput
        if (rowInput > 3 || colInput > 3)
        {
            printf("Invalid!");
            return 0;
        }

        // Display Second Matrix
        printf("\nSecond Matrix: \n");
        displayMatrix(matrix_2);

        // Adding the First and the Second Matrix
        addMatrix(matrix_1, matrix_2, sum_Matrix);
    }

    // Transpose Option
    else if (option == 2)
    {
        printf("\nTransposed Matrix: \n");
        transposeMatrix(matrix_1, resulting_Matrix);
    }

    // Invalid option selection
    else
    {
        printf("Invalid!");
    }
    return 0;
}