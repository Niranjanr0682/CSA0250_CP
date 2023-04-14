// write a program in c to find the GCD of two numbers using for loop

#include<stdio.h>
int main()
{
    int a,b,c,gcd;
    scanf("%d", &a);
    scanf("%d", &b);
    for(c=1; c <= a && c <= b; ++c)
        {if(a% c ==0 && b% c ==0)
            gcd = c;}
    printf("G.C.D %d and %d : %d", a, b, gcd);
    return 0;
}