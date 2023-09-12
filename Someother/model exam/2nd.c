// write a program to find wether the person is eligible for vote or not 


#include<stdio.h>
int main()
{   int a,c ;
    printf("enter your age to check whether you are eligible or not for voting :");
    scanf("%d",&a);
    if (a>=18)
        {printf("you are eligible for voting");}
    else
        {printf("you are not eligible voting\n ");
        c = 18 - a;
        printf("you need %d more age to vote",c);}
}