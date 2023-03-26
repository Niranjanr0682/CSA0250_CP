// program to find the similarity between them numbers.

#include<stdio.h>
int main()
    {
    int a ,b;
    printf("Please enter first integer:");
    scanf("%d", &a);
    printf("Please enter second integer:");
    scanf("%d", &b);
    if (a<b)
        {
            printf("%d is greater than %d",b,a);
        }
     else if (a>b)
        {
        printf("%d is greater than %d",a,b);
        }
    else
        {
            printf("%d is equal to %d",a,b);
        }
    
    return 0;
    }
