// write a program to print the character of the given ascii value 

#include <stdio.h>
int main() 
{  
    int c;
    printf("Enter the ascii number to find its character : ");
    scanf("%d", &c);
    printf("character of given ascii number %d is : %c", c, c);
    
    return 0;
}
