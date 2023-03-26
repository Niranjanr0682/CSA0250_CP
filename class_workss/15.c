#include<stdio.h>
// program to add two string using strcat() function and get input from the user.

#include <string.h>
int main()
{
    char a[50],b[50];
    char c;
    printf("give first name to merge  : ");
    scanf("%s",a);
    // fgets(a,sizeof(a),stdin);
    printf("give second name to merge : ");
    scanf("%s",b);
    // fgets(b,sizeof(b),stdin);
    // printf("the first string : ");
    // puts(a);
    // printf("the second string  : ");
    // puts(b);
    // strcat(a,b);
    // printf("the merged string is %d",);
    strcat(a,b);
    printf("the combined string is : %s",a);

}