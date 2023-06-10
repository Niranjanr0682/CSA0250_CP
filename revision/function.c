#include<stdio.h>  
void add();  
void sub();
void mul();
void div();
void main() 

{ char a,s,m,d ;
  printf("enter a for addition.\n" );
  printf("enter s for subtration.\n");
  printf("enter m for multiplication.\n");
  printf("enter d for division.\n\n");
  printf("enter a character : ");
  scanf("%c",&a);
  
  if (a == 'a')
    {add();}
  else if(a == 's')
    {sub();}
  else if(a == 'm')
    {mul();}
  else if(a == 'd')
    {div();}
  
  } 

void add()  
  {  int a,b;   
    printf("\nEnter two numbers\n");  
    scanf("%d %d",&a,&b);   
    printf("The addition of %d and %d is %d",a,b,a+b);} 

void sub()  
  {  int a,b;   
    printf("\nEnter two numbers\n");  
    scanf("%d %d",&a,&b);   
    printf("The subraction of %d and %d is %d",a,b,a-b);}  

void mul()  
  {  int a,b;   
    printf("\nEnter two numbers\n");  
    scanf("%d %d",&a,&b);   
    printf("The multiplication vavlue of %d and %d is %d",a*b);}  

void div()  
  { float a,b;   
    printf("\nEnter two numbers\n");  
    scanf("%f %f",&a,&b);   
    printf("The division of %.0f by %.0f is %.2f",a,b,a/b);}  

