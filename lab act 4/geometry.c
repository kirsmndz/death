/*
This program is a starter file for function that compute the volume and surface of a sphere with radius r; a cylinder with circular base with radius r and height h; and a cone with circular base with radius r and height h.
Written by: MKAM
Date written: 04/27/2022
Last modified: 04/27/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415929 // Constant

// Function prototypes
float sphereVolume(float r);
float sphereSurface(float r);
float cylinderVolume(float r, float h);
float cylinderSurface(float r, float h);
float coneVolume(float r, float h);
float coneSurface(float r, float h);

int main(void)
{
    // 1. Declare variables
    float radius, height;
    // 2. Prompt the user and scan input
    printf("Enter the given radius and height: ");
    scanf("%f %f", &radius, &height);
    // 3. Compute by calling the function and display the result
    printf("\nThe volume of the sphere of radius %0.2f is equal to %0.2f cu. units.\n", radius, sphereVolume(radius));
    printf("\nThe surface area of the sphere of radius %0.2f is equal to %0.2f sq. units.\n", radius, sphereSurface(radius));
    printf("\nThe volume of a cylinder with radius %0.2f and height %0.2f is equal to %0.2f cu. units.\n", radius, height, cylinderVolume(radius, height));
    printf("\nThe surface area of a cylinder with radius %0.2f and height %0.2f is equal to %0.2f sq. units.\n", radius, height, cylinderSurface(radius, height));
    printf("\nThe volume of a cone with radius %0.2f and height %0.2f is equal to %0.2f cu. units.\n", radius, height, coneVolume(radius, height));
    printf("\nThe surface area of a cone with radius %0.2f and height %0.2f is equal to %0.2f cu. units.\n", radius, height, coneSurface(radius, height));
    return 0; // exit
} // end of main

float sphereVolume(float r)
{
    // Formula for the volume of the sphere here!
    return (4.0 * PI * r * r * r / 3.0);
}

float sphereSurface(float r)
{
    // Formula for the surface area of the sphere here!
    return (4.0 * PI * r * r);
}

float cylinderVolume(float r, float h)
{
    // Formula for the volume of the cylinder here!
    return (PI * r * r * h);
}

float cylinderSurface(float r, float h)
{
    // Formula for the surface area of the cylinder here!
    return ((2.0 * PI * r * h) + (2.0 * PI * r * r));
}

float coneVolume(float r, float h)
{
    // Formula for the volume of the cone here!
    return (PI * r * r * h / 3.0);
}

float coneSurface(float r, float h)
{
    // Formula for the surface area of the cone here!
    return PI * r * (r + sqrt((h * h) + (r * r)));
}