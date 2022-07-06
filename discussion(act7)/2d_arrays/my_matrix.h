#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLUMNS 3

int rowInput = 0, colInput = 0;

void input()
{
    // Ask for user input regarding the matrices' rows and columns.
    printf("\nEnter number of rows: ");
    scanf("%d", &rowInput);
    printf("Enter number of columns: ");
    scanf("%d", &colInput);
}

void elementInput(double matrix1[MAX_ROWS][MAX_COLUMNS])
{
    // Initialization of array based on user input.
    for (int row = 0; row < rowInput; row++)
    {
        for (int col = 0; col < colInput; col++)
        {
            printf("Enter element number [%d][%d]: ", row, col);
            scanf("%lf", &matrix1[row][col]);
        }
    }
}

void displayMatrix(double matrix1[MAX_ROWS][MAX_COLUMNS])
{
    // Display the inputted matrix
    for (int row = 0; row < rowInput; row++)
    {
        for (int col = 0; col < colInput; col++)
        {
            printf("%0.0f\t", matrix1[row][col]);
        }
        printf("\n");
    }
    return;
}

void addMatrix(double matrix1[MAX_ROWS][MAX_COLUMNS], double matrix2[MAX_ROWS][MAX_COLUMNS], double sumMatrix[MAX_ROWS][MAX_COLUMNS])
{
    // Formula to Add Matrix 1 and Matrix 2
    for (int row = 0; row < rowInput; row++)
        for (int col = 0; col < colInput; col++)
        {
            sumMatrix[row][col] = matrix1[row][col] + matrix2[row][col];
        }
    // Prints the Sum of Matrix 1 and Matrix 2
    printf("\nSum of the First and Second Matrix: \n");
    for (int row = 0; row < rowInput; row++)
        for (int col = 0; col < colInput; col++)
        {
            printf("%0.0f\t", sumMatrix[row][col]);
            // Arrangement
            if (col == colInput - 1)
            {
                printf("\n");
            }
        }
    return;
}

void transposeMatrix(double matrix1[MAX_ROWS][MAX_COLUMNS], double resultingMatrix[MAX_ROWS][MAX_COLUMNS])
{
    for (int row = 0; row < rowInput; row++)
        for (int col = 0; col < colInput; col++)
        {
            resultingMatrix[row][col] = matrix1[row][col];
        }

    for (int row = 0; row < colInput; row++)
    {
        for (int col = 0; col < rowInput; col++)
        {
            printf("%0.0f\t", resultingMatrix[col][row]);
        }
        printf("\n");
    }
    return;
}
