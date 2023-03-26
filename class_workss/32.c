// program to print pascal triangle.

#include <stdio.h>
int main() 
    {int i,j,rows,s,ce=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for (i=0;i<rows;i++) 
        {for(s=1;s<=rows-i;s++)
            printf("  ");
        for(j=0;j<=i;j++) 
            {if(j==0||i==0)
                {ce=1;}
            else
                {ce=ce*(i-j+1)/j;}
            printf("%4d",ce);}
        printf("\n");}
    return 0;}
