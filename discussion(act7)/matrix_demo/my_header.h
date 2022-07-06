#include <stdio.h>
#define MAX_ROWS 4 // students
#define MAX_COLUMNS 2 // roll no. & mark

// This function displays an integer matrix.
void display_matrix(int matrix[MAX_ROWS][MAX_COLUMNS])
{
    for (int row = 0; row < MAX_ROWS; row++)
    {
        for (int col = 0; col < MAX_COLUMNS; col++)
        {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }
}
