// program to check if the year is leap year or not.

#include<stdio.h>
int main()
{
    int a ;
    printf("enter the year to check if it id leap year or not :");
    scanf("%d",&a);
    if (a% 4 == 0)
        {if (a% 100 == 0)
            {if (a % 400 == 0)
                {printf("The year %d is 'leap year'",a);}
            else
                {printf("The year %d is 'not a leap year'",a);}}
        else
            {printf("The year %d is 'leap year'",a);}}
    else
        {printf("The year %d is 'not a leap year'",a);}
}
