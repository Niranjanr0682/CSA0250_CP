// program to print the given string and its exact length ,get the input from the user.

#include<stdio.h>
#include <string.h>
int main()
  { int s;
    char a[100];
    printf("enter your name :");
    fgets(a,sizeof(a),stdin);
    printf("your name is ");
    puts(a);
    s = strlen(a) - 1;
    printf("the length of your name is %d",s); }