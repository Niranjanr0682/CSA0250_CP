// program to count the number of vowels in a given string, get the input from the user.

#include<stdio.h>
#include <string.h>
void main ()  
{  
    char s[20]; 
    printf("enter character to check the count of vowels in it : ");
    scanf("%s",s);
    int i = 0;   
    int v = 0;  
    while(i<11)  
        {if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')  
        {v++;}
        i++;}  
    printf("The number of vowels in %s is %d",s,v);  }