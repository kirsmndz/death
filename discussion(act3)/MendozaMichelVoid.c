/*
This program demonstrates the use of void functions.
Written by: MKAM
Date written: 04/21/2022
Last modified: 04/21/2022
*/

#include <stdio.h>

void greet(); // declaring the function

int main(void)
{
    // Calling your function in the main
    greet();
    return 0;
}

void greet()
{
    printf("Mabuhay!\n");
    printf("Bonjour!\n");
    printf("Annyeong Haseyo!\n");
    return;
}