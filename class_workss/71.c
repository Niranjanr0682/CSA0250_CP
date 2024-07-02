// String Palindrome Program in C

#include <stdio.h>  
#include <string.h>  
int main ()  
    {char str1[30];  
    int i, len, rev = 0;  
    printf (" Enter a string: ");  
    scanf ("%s", str1);  
    len = strlen( str1 );                 
    for ( i = 0; i < len; i++)  
        {if (str1[i] != str1[len - i - 1])     
            {rev = 1;   
            break;}}                               
    if (rev)  
        {printf (" %s is not a palindrome string", str1);}  
    else  
        {printf (" %s is a palindrome", str1);}  
    return 0;}  