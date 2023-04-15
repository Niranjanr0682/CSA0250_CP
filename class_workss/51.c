// write a program to convert feet to inch.

#include <stdio.h> 
 
int main() 
{ 
    float height, inch; 
    printf("Enter height in feet:"); 
    scanf("%f", &height); 
    inch = height * 12; 
    printf("%f", inch); 
    return 0; 
}