// program to display the multiplication of the given number ,ger the input form the user.

#include <stdio.h>

int main() 
{
    int num, i,j;
    printf("Enter a number to do multiply table  : ");
    scanf("%d", &num);
    printf("till which number you need to multiply:");
    scanf("%d",&j);
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= j; i++) 
        {printf("%d x %d = %d\n", num, i, num*i);}
    return 0;
}
