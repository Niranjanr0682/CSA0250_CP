//program to do square matrix. 


#include<stdio.h>

int main() 
    {
    int a[100][100], d[100][100],i,j,k,r,c;                                            // for a matrix
    printf("enter how many rows and columns for a\n");                                 // for a matrix
    printf("enter rows   :" );                                                         // for a matrix
    scanf("%d",&r);                                                                    // for a matrix
    printf("enter column :" );                                                         // for a matrix
    scanf("%d",&c);                                                                    // for a matrix
    printf("Enter elements of 1st matrix\n");                                          // for a matrix
    for (i = 0; i < r; ++i)// for row                                                  // for a matrix
        {for (j = 0; j < c; ++j)// for column                                          // for a matrix
            {printf("Enter element a[%d][%d]: ", i + 1, j + 1); //for elements         // for a matrix
            scanf("%d", &a[i][j]);}}                                                   // for a matrix
    // squaring of matrix   
    for(i=0;i<r;i++)    
        {for(j=0;j<c;j++)    
            {d[i][j]=0;    
                for(k=0;k<c;k++)    
                    {d[i][j]+=a[i][k]*a[k][j];}}}  
    // printing the result
    printf("\nsquare of given matrix: \n");
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j)
            {printf("%d   ", d[i][j]);
            if (j == c - 1)
                {printf("\n\n");}}}

}