// program to compare two strings using the strcmp() function,get the input from the user.

#include<stdio.h>
#include <string.h>
int main()
{
    char a[50],b[50];
    int c;
    printf("give first name : ");
    //scanf("%s",a);
    fgets(a,sizeof(a),stdin);
    printf("give second name : ");
    // scanf("%s",b);
    fgets(b,sizeof(b),stdin);
    c = strcmp(a,b);
    printf("%d",c);
    // puts(strcmp(a,b)); wrong statement cant use puts s in string functions

}
