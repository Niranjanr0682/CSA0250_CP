// 5. write a program in c to do matrix transpose

#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c;                                                           // for matrix
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
    printf("\nthe original \n");
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j)
            {printf("%d   ", a[i][j]);
            if (j == c - 1)
                {printf("\n\n");}}}
    printf("\n\n");
    // to print the transpose matrix
    printf("\nthe transpose \n");
    for (i = 0; i < r; ++i)
        {for (j = 0; j < c; ++j)
            {printf("%d   ", a[j][i]);
            if (j == c - 1)
                {printf("\n\n");}}} 
                
}