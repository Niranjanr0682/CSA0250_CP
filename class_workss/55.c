// write a program that will take letters as input and will print its previous letter.

#include <stdio.h> 
 
int main(void) 
{ 
    char ch; 
    printf("Please enter a character:"); 
    scanf("%c", &ch); 
    char prevCh = (int) ch - 1; 
    printf("the previous of given character  %c is %c", ch,prevCh); 
    return 0; 
}