/*Program to Count the number of vowels, consonants, digits, and white-spaces in a 
	string entered by the user.*/

#include <stdio.h>
#include<ctype.h>
int main() 
{
  char a[500];
  int v=0,c=0,d=0,ws=0,uc=0,lc=0;
  // get full line of string input
  printf("Enter a line of string: ");
  fgets(a,sizeof(a),stdin);
  for (int i = 0; a[i] != '\0'; ++i) 
    { if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'||
        a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') 
        {++v;//to count  vowel
        if(a[i]>='A'&&a[i]<='Z')
          {++uc;}
        else
          {++lc;}}
      else if ((a[i]>='a'&&a[i]<='z') || (a[i]>='A'&&a[i]<='Z')) 
        {++c;//to count for consonants
        if(a[i]>='A'&&a[i]<='Z')
          {++uc;}
        else
          {++lc;}}
      else if (a[i]>='0'&&a[i]<='9')
        {++d;}//to count digits
      else if (a[i]==' ') 
        {++ws;} }//to white space
      // else if (a[i]>='A'&&a[i]<='Z')
      //   {++uc;}//to count uppercase
      // else if (a[i]>='a'&&a[i]<='z')
      //   {++lc;} }//tp count lowercase

    printf("\nUppercase    : %d", uc);
    printf("\nLowercase    : %d", lc);   
    printf("\nVowels       : %d", v);
    printf("\nConsonants   : %d", c);
    printf("\nDigits       : %d", d);
    printf("\nWhite spaces : %d", ws);
    return 0;
  }
