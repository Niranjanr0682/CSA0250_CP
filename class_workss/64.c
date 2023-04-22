// write a program to show largest factor of a given number n 
// (other than the number itself).

#include <stdio.h>
int main(void)
{
    int num;
    printf("Please enter an integer:");
    scanf("%i", &num);
    for(int i=(num-1); i>=0; i--)
        {
        if(i==0)
            {
            printf("1");
            break;
            }
        if(num%i==0)
            {
            printf("the largest factor of given number %d is %i\n",num, i);
            break;
            }
        }
    return 0;
}   