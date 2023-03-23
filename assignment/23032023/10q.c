// 10.Predict the output or error(s) for the following program:

/*
#define square(x) x*x
main()
{
int i;
i = 64/square(4);
printf("%d",i);
} */

/*modified*/

#include<stdio.h>
#define square(x)x*x
int main()
{
int i;
i = 64/square(4);
printf("%d",i);
}


/*the output is 64*/