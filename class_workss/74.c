// write a program to print armstrong number between two integers.

#include <math.h>
#include <stdio.h>
int main() 
{
    int low, high, number, originalNumber, rem, count = 0;
    double result = 0.0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);
    if (high < low)             // swap numbers if high < low 
        {high += low;
        low = high - low;
        high -= low;}
    for (number = low + 1; number < high; ++number) // iterate number from (low + 1) to (high - 1)
        {originalNumber = number;                   // In each iteration, check if number is Armstrong
        while (originalNumber != 0)                 // number of digits calculation
            {originalNumber /= 10;
            ++count;}

        originalNumber = number;
        
        while (originalNumber != 0)                 // result contains sum of nth power of individual digits
            {rem = originalNumber % 10;
            result += pow(rem, count);
            originalNumber /= 10;}

        if ((int)result == number)                 // check if number is equal to the sum of nth power of individual digits
            {printf("%d ", number);}

        
        count = 0;                                 // resetting the values
        result = 0;}

    return 0;
}