// 1. write a program in c to count the total number of vowels or consonants in a string

#include <stdio.h>
#include<ctype.h>
int main() 
{
  char a[500];
  int v=0,c=0;
  // get full line of string input
  printf("Enter a line of string: ");
  fgets(a,sizeof(a),stdin);
  for (int i = 0; a[i] != '\0'; ++i) 
    { if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'||
        a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') 
        {++v;}//to count  vowel
    else if ((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&&a[i]<='Z')) 
        {++c;}}//to count for consonants
    printf("\nVowels       : %d", v);
    printf("\nConsonants   : %d", c);}