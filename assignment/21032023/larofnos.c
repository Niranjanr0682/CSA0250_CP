// compile and execute the c program to compute grade of students using if else ladder

#include<stdio.h>
int main()
{
    int a,b,c ;
    printf("Please enter first integer  :");
    scanf("%d", &a);
    printf("Please enter second integer :");
    scanf("%d", &b);
    printf("Please enter first integer  :");
    scanf("%d", &c);
    
    if (a>b && a>c)
         {printf("%d is the largest among all number.\n",a);
        if (b<c)
            if (a%2 == 0)
            { printf("%d is the smallest among all numbers.",b); }
        else
            { printf("%d is the smallest among all numbers.",c); }}
    else if (b>c && b>a)
        {printf("%d is the largest among all number.\n",b);
        if (a<c)
            { printf("%d is the smallest among all numbers.",a); }
        else
            { printf("%d is the smallest among all numbers.",c); }}
    else
        {printf("%d is the largest among all number.\n",c);
        if (a<b)
            { printf("%d is the smallest among all numbers.",a); }
        else
            { printf("%d is the smallest among all numbers.",b); }}
    return 0;
}