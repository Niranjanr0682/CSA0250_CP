// 4. Predict the output or error(s) for the following program:

/*
#include<stdio.h>

void main()
{
int const * p=5;
printf("%d",++(*p));
}
*/

/* the errors are 
    initialization of 'const int *' from 'int' makes pointer from integer without a cast
    increment of read-only location '*p' 
   modifing a constant integer through a pointer is invald*/

/*solution 
    by removing the const keyword*/


// the corrected code

#include<stdio.h>

void main()
{
int x = 5 ;
int *p= &x;
printf("%d",++(*p));
}
 
// the output for the code is '6'