// write a program to print sum of first n numbers using loop.

#include <stdio.h>
int main(void)
{
    int n, sum = 0;
    printf("Please enter a number : ");
    scanf("%i", &n);
    for(int i=1; i<=n; i++)
        {
        sum += i;
        }
    printf("Sum : %i", sum);
    return 0;
}