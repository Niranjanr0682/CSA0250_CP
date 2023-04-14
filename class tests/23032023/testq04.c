//4.c program to seperate individual characters from a string

#include<stdio.h>
#include<string.h>
int main()
    {char a[500];
    int i ;
    printf("input the string :");
    scanf("%s",a);  
    for(i=0;i<strlen(a);i++)
    {printf("%c ", a[i]);}  
    return 0;}  
