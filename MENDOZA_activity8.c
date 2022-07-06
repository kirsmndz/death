/*
This program demonstrates the use of string functions when creating an enhanced security and anti-fraud protection system.
Written by: MKAM
Date written: 06/15/2022
Last modified: 06/16/2022
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>


#define BUFFER_SIZE 100
#define USERNAME "MKAM"
#define PASSWORD "LBYEC2A"

int main(){
    char password[BUFFER_SIZE + 1];
    char username[BUFFER_SIZE + 1];
    char ch;
    int characterPosition = 0;
    printf("\nEnter your username: ");
    scanf("%[^\n]%*c", username);

    printf("Enter your password: ");

    while (1) {
        ch = getch();
        if (ch==13) { // ASCII Code of ENTER: 13
            break;
        } else if (ch == 8) { // ASCII Code of BACKSPACE: 08
            if(characterPosition > 0){
                characterPosition--;
                password[characterPosition] = '\0';
                printf("\b \b");
            }
        } else if (ch == 32 || ch == 9) {// ASCII Code of SPACE: 32 | ASCII Code of TAB: 09
            continue;
        }else {
        password[characterPosition] = ch;
        characterPosition++;
        printf("*");
        }
    }

    username[characterPosition] = '\0';
    password[characterPosition] = '\0';
    if ((strcmp(username, USERNAME) == 0) && (strcmp(password, PASSWORD) == 0)) {
        puts("\n\nVALID!");

        char name[BUFFER_SIZE + 1];
        char degree[BUFFER_SIZE + 1];
        char studentID[BUFFER_SIZE + 1]; 
        char address[BUFFER_SIZE + 1];
        char birthday[BUFFER_SIZE + 1];

        printf("\nEnter your Name: ");
        scanf("%[^\n]%*c", name);
    
        printf("Enter you Degree program: ");
        scanf("%[^\n]%*c", degree);
         
        printf("Enter your student ID no.: ");
        scanf("%[^\n]%*c", studentID);

        printf("Enter your address: ");
        scanf("%[^\n]%*c", address);
  
        printf("Enter your birthday: ");
        scanf("%[^\n]%*c", birthday);

        printf("\nHello %s!\n", name);

        printf("\nThe following is your profile: \n");

        printf("\nName: %s", name);
        printf("\nDegree Program: %s", degree);
        printf("\nStudent ID no.: %s", studentID);
        printf("\nAddress: %s", address);
        printf("\nBirthday: %s", birthday);

    } else {
        puts("\n\nINVALID!");
    }
    return 0;

}