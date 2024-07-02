// write a program to find wether its armstrong number or not uisng for loop.

#include <math.h>
#include <stdio.h>

int main() 
{
    int num,orino,r,n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    orino = num;                                
    for (orino = num; orino != 0; ++n) 
        {orino /= 10;}
    for (orino = num; orino != 0; orino /= 10) 
        {r = orino % 10;                        
        result += pow(r, n);}          
   
    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}