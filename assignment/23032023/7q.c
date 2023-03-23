#include <stdio.h>  
#include <conio.h>  
void main()  
{   int i, j, rows, k;  
    printf (" Enter a number to define the rows: ");  
    scanf("%d", &rows);
    for (i=1;i<=rows;i++)   
        {for(j=i;j<rows;j++)   
            {printf("  ");}  
        for(k=1;k<=i;k++)  
            {printf(" %d",k);}  
        printf ("\n");}      
}  


/*the final output
    Enter a number to define the rows:5

             1
           1 2
         1 2 3
       1 2 3 4
     1 2 3 4 5*/