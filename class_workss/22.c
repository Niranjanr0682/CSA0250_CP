/*program to tell whether the given character is vowels or consonant or not alphabet,
	get input from the user.*/

#include <stdio.h>
#include<ctype.h>
int main() 
{
    char c;
    int Lc_vowel, Uc_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    Lc_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    Uc_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (!isalpha(c))
      {printf("Error! Non-alphabetic character.");}
    else if (Lc_vowel || Uc_vowel)
      {printf("%c is a vowel.", c);}
    else
      {printf("%c is a consonant.", c);}
    return 0;
}
