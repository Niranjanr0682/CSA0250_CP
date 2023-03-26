// program to do sum of main diagonal and off diagonal in matrix.

#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c,s = 0,q = 0;                                               // for matrix
    printf("enter how many rows and columns matrix\n");                                // for matrix
    printf("enter rows   :" );                                                         // for matrix
    scanf("%d",&r);                                                                    // for matrix
    printf("enter column :" );                                                         // for matrix
    scanf("%d",&c);                                                                    // for matrix
    printf("Enter elements of 1st matrix\n");                                          // for matrix
    for (i = 0; i < r; ++i)// for row                                                  // for matrix
        {for (j = 0; j < c; ++j)// for column                                          // for matrix
            {printf("Enter element a[%d][%d]: ",i + 1 ,j + 1 ); //for elements         // for matrix
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
    // printf("\nthe diagonal of the matrix \n");
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j)
        if  (i == j)
            {s += a[i][i];}
            q += a[i][r - i - 1];}
    
    printf("\n The Sum of main-Diagonal Elements of a Matrix =  %d",s );
 	printf("\n The Sum of off-Diagonal Elements of a Matrix  =  %d",q );

 	return 0;
}