#include<stdio.h>  
int main()    
{    
    int i,a=1,b;    
    printf("Enter a number: ");    
    scanf("%d",&b);    
        for(i=1;i<=b;i++)
        {a=a*i;}    
    printf("Factorial of %d is: %d",b,a);    
    return 0;  
}   