// write a program to print sum of all even numbers up to n.

#include <stdio.h>
int main(void)
{
    int n, sum = 0;
    printf("Please enter a number : ");
    scanf("%i", &n);
    for(int i=1; i<=n; i++)
        {
        if(i%2==0)
        sum += i;
        }
    printf("Sum : %i", sum);
    return 0;
}