#include <stdio.h>
#include <stdlib.h>

int main()

{
    int sum, i;
    printf("\nWhile loop Accumulator");
    i = 1;
    sum = 0;
    while (i <= 5)
    {
        sum = sum + i;
        i++;
    }
    printf("\nThe sum is %d", sum);
    return 0;
}