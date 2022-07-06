/*
This program converts a value in one unit to another unit.
Written by: MKAM
Date written: 04/27/2022
Last modified: 04/28/2022
*/
#include <stdio.h>

int main(void)
{
    // 1. Declare variables
    int choice;
    float miles2km, pounds2kg, Tf2Tr, mi, lbs, Tf;
    // Your code here! (More declarations)
    // 2. Display the menu
    printf("========================\n"
           "     MENU Options\n"
           "========================\n"
           "(1) Conversions from miles to km\n"
           "(2) Conversions from pounds to kg\n"
           "(3) Conversions from deg. F to deg. R\n");
    // 3. Prompt the user and scan value
    printf("\nEnter choice: \n");
    scanf("%d", &choice);

    // 4. Decision
    switch (choice)
    {
    case 1:
        printf("You chose conversions from miles to km\n"
               "Enter your value in miles: \n");
        scanf("%f", &mi);
        // Computation here!
        miles2km = (mi * 1.6093440);
        printf("Conversion: %0.2f miles = %0.2f km", mi, miles2km);
        break;
    case 2:
        printf("You chose conversions from pounds to kg\n"
               "Enter your value in pounds: \n");
        scanf("%f", &lbs);
        // Computation here!
        pounds2kg = (lbs / 2.205);
        printf("Conversion: %0.2f lbs = %0.2f kg", lbs, pounds2kg);
        break;
    case 3:
        printf("You chose conversions from deg. F to deg. R\n"
               "Enter the temperature in Fahrenheit: \n");
        scanf("%f", &Tf);
        // Computation here!
        Tf2Tr = (Tf + 459.67);
        printf("Conversion: %0.2f Degrees Fahrenheit = %0.2f Degrees Rankin", Tf, Tf2Tr);
        break;
    default:
        printf("This is an invalid option!");
    }
    // Exit
    return 0;
}