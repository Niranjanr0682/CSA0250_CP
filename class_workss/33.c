// program to find gcd of two numbers.

#include <stdio.h>
int main()
{
    int a, b, i, gcd;
    printf("Enter first integer  : ");
    scanf("%d", &a);
    printf("Enter second integer : ");
    scanf("%d", &b);
    for(i=1; i <= a && i <= b; ++i)
        {if(a%i==0 && b%i==0)
            gcd = i;}
    printf("G.C.D of %d and %d is %d", a, b, gcd);
    return 0;
}