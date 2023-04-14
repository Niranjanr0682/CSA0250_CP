// 7. write a program in c to do sum of natural numbers using while loop

#include<stdio.h>  
void main( )   
    {int n, count = 1;   
    float x,sum = 0;   
    printf("Enter the value of n?");  
    scanf ("%d",&n);   
    while (count <= n)   
        {printf ("Enter the %d number?",count);   
        scanf("%f", &x);   
        sum += x;   
        ++count;} 
    printf("\nThe sum is    :%.2f\n", sum);}
