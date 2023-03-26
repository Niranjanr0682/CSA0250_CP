// program to do sum of three matrix

#include <stdio.h>
int main() 
    {
    int a[100][100], b[100][100], e[100][100], d[100][100],i,j,r,c;              
    printf("enter how many rows and columns for a\n");                                 // for a matrix
    printf("enter rows   :" );                                                         // for a matrix
    scanf("%d",&r);                                                                    // for a matrix
    printf("enter column :" );                                                         // for a matrix
    scanf("%d",&c);                                                                    // for a matrix
    printf("Enter elements of 1st matrix\n");                                          // for a matrix
    for (i = 0; i < r; ++i)// for row                                                  // for a matrix
        {for (j = 0; j < c; ++j)// for column                                          // for a matrix
            {printf("Enter element a[%d][%d]: ",i + 1 ,j + 1 ); //for elements         // for a matrix
            scanf("%d", &a[i][j]);}}                                                   // for a matrix
    printf("enter how many rows and columns for b\n");                                 // for b matrix
    printf("enter rows   :" );                                                         // for b matrix
    scanf("%d",&r);                                                                    // for b matrix
    printf("enter column :" );                                                         // for b matrix
    scanf("%d",&c);                                                                    // for b matrix
    printf("Enter elements of 2nd matrix\n");                                          // for b matrix
    for (i = 0; i < r; ++i)                                                            // for b matrix
        {for (j = 0; j < c; ++j)                                                       // for b matrix
            {printf("Enter element b[%d][%d]: ",i + 1 ,j + 1 );                        // for b matrix
            scanf("%d", &b[i][j]);}}                                                   // for b matrix
    printf("enter how many rows and columns for b\n");                                 // for c matrix
    printf("enter rows   :" );                                                         // for c matrix
    scanf("%d",&r);                                                                    // for c matrix
    printf("enter column :" );                                                         // for c matrix
    scanf("%d",&c);                                                                    // for c matrix
    printf("Enter elements of 3rd matrix\n");                                          // for c matrix
    for (i = 0; i < r; ++i)                                                            // for c matrix
        {for (j = 0; j < c; ++j)                                                       // for c matrix
            {printf("Enter element c[%d][%d]: ",i + 1 ,j + 1 );                        // for c matrix
            scanf("%d", &e[i][j]);}}                                                   // for c matrix
    // adding two matrices
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j) 
            {d[i][j] = a[i][j] + b[i][j] +e[i][j];}}
    // printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j)
            {printf("%d   ", d[i][j]);
            if (j == c - 1)
                {printf("\n\n");}}}

}
