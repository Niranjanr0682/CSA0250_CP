// program to find the power of number upto n number of elements using loop.

#include <stdio.h>
            int main () 
            {
                int a,b;
                printf("untill which number u need to do exponent : ");
                scanf("%d",&b);
                for( a = 1; a <= b; a++ )
                    {printf("%d\n",a * a);}
                return 0;
            }
