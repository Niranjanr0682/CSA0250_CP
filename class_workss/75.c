//celcius to fahrenheit

#include<stdio.h>  
int main()   
    {float fahrenheit, celsius;  
    printf("enter temperature in fahrenheit : ");
    scanf("%f",&fahrenheit) ; 
    celsius =(fahrenheit-32)*5/9;  
    printf("\n\n Temperature in celcius is:  %.3f",celsius);  
    return 0;  
    }