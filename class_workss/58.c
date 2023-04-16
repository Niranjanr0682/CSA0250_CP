// write a program to print even numbers upto n.

#include <stdio.h>

int main(void)
{
    int n;
    printf("Please enter a number:");
    scanf("%i", &n);
    for(int i=0; i<=n; i++)
        {
        if(i%2==0)
        printf("%i\n", i);
        }
    return 0;
}