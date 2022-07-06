/*
This program demonstrates the use of passing arguments.
Written by: MKAM
Date written: 04/21/2022
Last modified: 04/21/2022
*/

#include <stdio.h>

void php2euro(double php);

int main(void)
{
    // 1. Declare and Initialize variable
    double my_money = 2000;
    double your_money = 8000;
    // 2. Call your function in the main
    php2euro(my_money);
    php2euro(your_money);
    // exit
    return 0;
}

// This function converts php to euro
void php2euro(double php)
{
    double euro = php / 56.8743;
    printf("%0.2lf PHP = %0.2lf EURO\n", php, euro);
}