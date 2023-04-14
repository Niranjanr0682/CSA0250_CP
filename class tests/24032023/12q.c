//12.write a program to reverse a number using while loop

#include <stdio.h>

int main()
    {int i, rn = 0, j;
    printf("Enter the number to reverse: ");
    scanf("%d", &i);    
    while (i!=0)
    {   j = i % 10;
        rn = rn * 10 + j;
        i = i/10;
    }    
    printf("The reversed number is: %d", rn);
    return 0; }