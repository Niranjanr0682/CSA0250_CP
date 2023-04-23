// write a program to find wether its armstrong number or not uisng for loop.

#include <math.h>
#include <stdio.h>

int main() 
{
    int num,orino,r,n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    orino = num;                                // store the number of digits of num in n
    for (orino = num; orino != 0; ++n) 
        {orino /= 10;}
    for (orino = num; orino != 0; orino /= 10) 
        {r = orino % 10;                        // store the sum of the power of individual digits in result
        result += pow(r, n);}                   // if num is equal to result, the number is an Armstrong number
   
    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}