// program to calculate simple interest.

#include<stdio.h>

int main()
{
    float a,b,c;
    float d,e ;
    printf("enter principle amount :");
    scanf("%f",&a);
    printf("enter interest rate    :");
    scanf("%f",&b) ;
    printf("enter year             :");
    scanf("%f",&c);
    d = a*b*c;
    e = d/100;
    printf("the simple interest rate for given values %f",e);
    
}