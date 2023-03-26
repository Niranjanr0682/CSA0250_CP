// program to print the english alphabet.

#include <stdio.h>
int main() 
{
    char i;
    printf("Enter 'U' to display uppercase alphabets\n");
    printf("Enter 'L' to display lowercase alphabets\n");
    printf("U / L :");
    scanf("%c", &i);

    if (i == 'U' || i == 'u') 
        {for (i = 'A'; i <= 'Z'; ++i)
        printf("%c ", i);}
    else if (i == 'L' || i == 'l') 
        {for (i = 'a'; i <= 'z'; ++i)
         printf("%c ", i);}
    else
        {printf("Error! You entered an invalid character.");}
    return 0;
}

