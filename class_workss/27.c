// program to print half pramid of alphabets.

#include <stdio.h>
#include<ctype.h>
int main()
{
   int i, j;
   char in, a = 'A';
   printf("Enter an character to print untill that: ");
   scanf("%c", &in);
   in = toupper(in)
   for (i=1;i<=(in-'A'+1);++i)
    { for (j = 1; j <= i; ++j)
        {printf("%c ", a);}
      ++a;
      printf("\n");}
}
