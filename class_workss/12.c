// program to read 10 numbers from the keyboard and find the sum and average of the given numbers

#include<stdio.h>  
void main( )   
    {int n, count = 1;   
    float x, average, sum = 0;   
    printf("Enter the value of n?");  
    scanf ("%d",&n);   
    while (count <= n)   
        {printf ("Enter the %d number?",count);   
        scanf("%f", &x);   
        sum += x;   
        ++count;}   
    average = sum/n;  
    printf("\nThe sum is    :%.2f\n", sum);
    printf("The Average is:%.2f\n", average);}  