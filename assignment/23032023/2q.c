// 2. What will be the output if you execute the following code in C?

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=3,val;
    val=sizeof f(i)+ +f(i=1)+ +f(i-1);
    printf("%d %d",val,i);
}
int f(int num)
{
    return num*5;
}


/* output for the above code is
    implicit declaration of function 'f'*/ 

/*this error occures because the function 'f' is not declared  */

// the correced code

#include<stdio.h>
#include<conio.h>
int f(int num);
void main()
{
    int i=3,val;
    val=sizeof f(i)+ +f(i=1)+ +f(i-1);
    printf("%d %d",val,i);
}

int f(int num)
{
    return num*5;
}
