// write a program to show all the factors of a number.

#include <stdio.h>
int main(void)
{
    int num;
    printf("Please enter an integer : ");
    scanf("%i", &num);
    printf("the factors of given number %d are\n",num);
    for(int i=1,j=1; i<=num; i++)
        {
        if(num%i==0)
            {printf("\t : %i\n", i);}
        }
    return 0;
}