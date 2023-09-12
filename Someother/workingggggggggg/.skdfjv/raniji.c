#include<stdio.h>
void main()
{
    
    float d;
    int r;
    char s;
    float a;
    printf("what you going to give radius or diameter\n");
    printf("enter 'r' for radius , 'd' for diameter : ");
    scanf("%c",&s);
    if(s=='r')
    {printf("\n enter the value of radius : ");
    scanf("%d", &r);
    a = 3.14*r*r;
    printf("\narea is %f",a );}
    else if(s == 'd')
    {printf("\n enter the value of diametre :");
    scanf("%f" ,& d );
    d = d/2;
    a = 3.14*d*d;
    printf("\narea is %f",a );}
    else
    printf("enter valid value");
    
}