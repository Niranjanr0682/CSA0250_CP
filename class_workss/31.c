// program to print inverted full pramid of stars.

#include <stdio.h>
int main() 
    {int i,j,rows,s;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i) 
        {for(s=0;s<rows-i;++s)
            printf("  ");
        for(j=i;j<=2*i-1;++j)
            printf("* ");
        for(j=0;j<i-1;++j)
            printf("* ");
        printf("\n");}
    return 0;}
