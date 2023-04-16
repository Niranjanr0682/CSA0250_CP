// write a program to print odd numbers upto n.

#include <stdio.h>
int main(void)
{
    int n;
    printf("Please enter a number:");
    scanf("%i", &n);
    for(int i=1; i<=n; i++)
        {
        if(i%2==1)
        printf("%i\n", i);
        }
    return 0;
}