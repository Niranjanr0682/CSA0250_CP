// program to copy the given string and to give the length of both strings.

#include<stdio.h>
#include <string.h>
int main()
{
    char a[50],b[50];
    printf("give a name to copy : ");
    fgets(a,sizeof(a),stdin);
    printf("the entered string : ");
    puts(a);
    strcpy(b,a);
    printf("the copied string  : ");
    puts(b);
    printf("the length of the string is %d",strlen(a)-1);
    
}
