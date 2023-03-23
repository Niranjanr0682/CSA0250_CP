#include<stdio.h>
int main()
{
    int a ;
    printf("Please enter marks to calculate grades :");
    scanf("%d", &a);
    if (a < 50)
        {printf("you get fail marks in your exam ");}
    else if(a>=50 && a<60)
        {printf("you scored C grade concentrate on studies");}
    else if(a>=60 && a<70)
        {printf("you scored B grade try to get good marks");}
    else if(a>=70 && a<80)
         {printf("you scored B+ grade good");}
    else if(a>=80 && a<90)
        {printf("you scored A grade in your exams");}
    else
    {printf("you scored A+ grade keep it up");}}