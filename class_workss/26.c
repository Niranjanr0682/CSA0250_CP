// program to print half pramid of numbers.

#include<stdio.h>
int main()

{
    int i = 1, j = 1,n ;
    printf("how many rows do you need :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
        { 
            for (j = 1;j<=i; j++)
            {printf("\t%d",j);}
    
        printf("\n");
        }
}