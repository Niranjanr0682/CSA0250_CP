/*program to find wether the person is eligible for vote or not and if that particular person is
	 	not eligible then print how many years are left to be eligible.*/

#include<stdio.h>
int main()
{   int a,c ;
    printf("enter your age to check whether you are eligible or not for voting :");
    scanf("%d",&a);
    if (a>=18)
        {printf("you are eligible for viting");}
    else
        {printf("you are not eligible voting\n ");
        c = 18 - a;
        printf("you need %d more age to vote",c);}
}