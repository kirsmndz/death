/*
This program converts the input Peso (PHP) to its equivalent US dollar, Russian Ruble,Saudi Riyal, and Japanese Yen.
Written by: MKAM
Date written: 04/21/2022
Last modified: 04/23/2022
*/
#include <stdio.h>

float php2usd(float php)
{
    return php / 52.4319;
}

float php2rub(float php)
{
    return php / 0.6383;
}

float php2sar(float php)
{
    return php / 13.985104;
}

float php2yen(float php)
{
    return php / 0.4091;
}

int main()
{
    int pera;
    printf("Enter your money (PHP): \n");
    scanf("%d", &pera);
    printf("Your money in USD is equal to %f.\n", php2usd(pera));
    printf("Your money in RUB is equal to %f.\n", php2rub(pera));
    printf("Your money in SAR is equal to %f.\n", php2sar(pera));
    printf("Your money in YEN is equal to %f.\n", php2yen(pera));
    return 0;
}