// write a program to show smallest factor of a number n (except 1).

#include <stdio.h>
int main(void)
{
    int num;
    printf("Please enter an integer : ");
    scanf("%i", &num);
    for(int i=2; i<=num; i++)
        {
            if(num%i==0)
                {
                printf("the smallest factor of given number %i is %i\n",num, i);
                break;
                }
        }
return 0;
}