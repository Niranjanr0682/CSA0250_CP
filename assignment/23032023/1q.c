//What will be the output if you execute the following code in C?
 
#include<stdio.h>
int main()
{
    int arr[]={6,12,18,24};
    int x=0;
    x=arr[1]+(arr[1]=2);
    printf("%d",x);
    return 0;
}


// The output of the code will be 14.

/* the output mentioned above is because the use of post-increment and 
assignment operators in the expression arr[1]+(arr[1]=2). */