// 50 .write a progrma to Print all odd numbers in the array, get input from user.

#include <stdio.h>

int main(void)
{   int n;
    printf("how many elements you want to enter :");
    scanf("%i", &n);

    int marks[n];
        for(int i=0; i<n; i++)
            {printf("Enter integer:");
            scanf("%i", &marks[i]);}
        printf("Odd number in the array:\n");
        for(int j=0; j<n; j++)
            {if(marks[j]%2 == 1)
                {printf("%i\n", marks[j]);}}
    return 0;
}