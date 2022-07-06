#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

int main()
{
    // char name [] = "Wanda Maximoff"
    char name[BUFFER_SIZE], team[BUFFER_SIZE];

    // Method 1: scanf
    printf("Enter your Avenger name: ");
    scanf("%[^\n]%*c", name); // includes spaces
    printf("Nice to have you on board, %s!", name);
    printf("\nThe string length is %lu!\n", strlen(name));

    // Method 2: fgets
    printf("\nEnter whose side you are on: ");
    fgets (team, BUFFER_SIZE, stdin); // stdin means console/terminal
    team[strlen(team)-1]='\0';
    printf("You are on Team %s! Good luck!!!", team);
    return 0;
}