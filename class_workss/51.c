// write a program to convert feet to inch.

#include <stdio.h> 
 
int main() 
{ 
    float height, inch; 
    printf("Enter height in feet : "); 
    scanf("%f", &height); 
    inch = height * 12; 
    printf("\nthe converted height value from feet to inch is %.2f", inch); 
    return 0; 
}