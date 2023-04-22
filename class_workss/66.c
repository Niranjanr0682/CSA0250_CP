// write a program to check the given number is prime or not.

#include <stdio.h>
int main(void)
{
    int n, check=1;
    printf("Enter an integer : ");
    scanf("%i", &n);
    for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
        {
            check=0;
            break;
        }
        }
    if(check==1 && n != 1)
        printf("The given number %i is Prime number!",n);
    else
        printf("The given number %i is Not a prime number!",n);
}