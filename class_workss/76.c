//program to find slop and midpoint for a line

#include<stdio.h>
 
void main()
{
    float x1,x2,y1,y2,slope,midX,midY;
    printf(" Enter the X Coordinate of Endpoint 1: ");
    scanf("%f",&x1);
    printf(" Enter the Y Coordinate of Endpoint 1: ");
    scanf("%f",&y1);
    printf(" Enter the X Coordinate of Endpoint 2: ");
    scanf("%f",&x2);
    printf(" Enter the Y Coordinate of Endpoint 2: ");
    scanf("%f",&y2);
    printf(" The Endpoints of a Line are : (%.2f,%.2f) and (%.2f,%.2f)",x1,y1,x2,y2);
    slope=(y2-y1)/(x2-x1);
    midX=(x1+x2)/2;
    midY=(y1+y2)/2;
    printf(" Slope of given line : %.2f",slope);
    printf(" Midpoint of gn line : (%.2f,%.2f)",midX,midY);
    }