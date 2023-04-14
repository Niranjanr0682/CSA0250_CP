//3 program to calculate factorial for given number 

#include<stdio.h>
int main()
    {int i,b,a = 1;
    printf("eenter a number to find its factorial : ");
    scanf("%d",&b);
    for (i=1;i<=b;i++)
    {a*=i;}
    printf("factorial of given number %d is : %d",b,a);
    }