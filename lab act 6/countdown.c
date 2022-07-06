-1
/*
This program accepts a positive integer n, representing the number of seconds before the rocket will launch.
Written by: MKAM
Date written: 04/28/2022
Last modified: 04/28/2022
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Initialization
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // Loop body
    // 2. Terminating Condition, e.g. (i=num)
    for (int i = num; i >= 0; i--) // i-- could also be i -=1 or i = i - 1
    {
        printf("%d\n", i);
    }
    printf("Blast Off! \n");
    return 0;
}