// 11 write a progarm in c to find sum of diagonal elements in array

#include <stdio.h>
int main() 
    {
    int a[100][100],i,j,r,c,s;                                 
    printf("enter how many rows and columns for a\n");                                 
    printf("enter rows   :" );                                                         
    scanf("%d",&r);                                                                    
    printf("enter column :" );                                                         
    scanf("%d",&c);                                                                 
    printf("Enter elements of 1st matrix\n");                                          
    for (i = 0; i < r; ++i)// for row                                                  
        {for (j = 0; j < c; ++j)// for column                                          
            {printf("Enter element a[%d][%d]: ",i + 1 ,j + 1 ); //for elements         
            scanf("%d", &a[i][j]);}}                                
    // to print the original matrix 
    printf("\nthe matrix \n");
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j)
            {printf("%d   ", a[i][j]);
            if (j == c - 1)
                {printf("\n\n");}}}
    printf("\n\n");
    // to take the diagonal
    printf("\nthe diagonal of the matrix \n");
    for (i = 0; i < r; i++)
        {for (i = 0; i < r; i++)
        if  (i == j)
            {s += a[i][i];}
        }
    
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d",s );

 	return 0;
}