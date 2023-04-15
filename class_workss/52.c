// write a program to convert inch to feet.

#include <stdio.h> 
 
int main() 
{ 
    float height, feet; 
    printf("Enter height in inch : "); 
    scanf("%f", &height); 
    feet = height / 12; 
    printf("\nthe converted height from inch to feet is %.3f", feet); 
    return 0; 
}