#include <stdio.h>
#include <string.h> // needed by strlen()

int main()
{
    char greet1[] = "Hello";                         // string (null termination) ... string
    char greet2[] = {'H', 'e', 'l', 'l', 'o'};       // plain char array ... character array
    char greet3[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // same value as greet 1
    char greet4[] = "Hello World!";

    // 1. Literal String
    printf("%s\n", greet1);
    // 2. Array
    for (int i = 0; i < 5; i++)
    {
        putchar(greet2[i]);
    }
    // 3. Another String
    printf("\n%s\n", greet3);

    printf("\nThe length of the greet1 string is %d.", strlen(greet1));
    printf("\nThe length of the greet2 string is %d.", strlen(greet2));
    printf("\nThe length of the greet3 string is %d.", strlen(greet3));
    printf("\nThe length of the greet4 string is %d.", strlen(greet4));
    return 0;
}