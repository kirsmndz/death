#include <stdio.h>

int main(){
    char msg []={'H', 'e', 'l', 'l', 'o'};
    printf("The first letter is %c.", msg[0]);
    msg[0] = 'M'; 
    printf("\nThe first letter is %c.\n", msg[0]);

    for (int i = 0; i < 5; i++)
    {
        putchar(msg[i]);
    }
    return 0;
}