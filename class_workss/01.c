/* program to check whether the number dividable by 2 then print the given number is
 	even other wise odd check and disply the out put on screen. */

#include<stdio.h>
int main()
{   int a;
    printf("enter the value to check whether is odd or even :");
    scanf("%d",&a);
    if (a%2==0)
        {printf("the given number %d is even",a);}
    else
        {printf("the given number %d is odd",a);
    return 0;}
}