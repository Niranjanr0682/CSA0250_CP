// write a program to check the given number is perfect number.

#include <stdio.h>
int main(void)
{
    int n, result=0;
    printf("Enter an integer : ");
    scanf("%i", &n);
    for(int i=1; i<=n/2; i++)
        {
        if(n%i==0)
        result += i;
        }
    if(result == n)
        printf("Perfect number!");
    else
        printf("Not a perfect number!");
    return 0;
}