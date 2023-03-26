// program to display the cube of numbers upto an integer 

#include<stdio.h>
#include <math.h>

int main()
{
    int a,i,j,b=3;
    printf("enter a value to see the cube of the numbers untill : ");
    scanf("%d",&a);
    for (i=1; i<=a;i++)
        {j = pow(i,b);
        printf("the cube of %d is %d\n",i,j);}
    
}