// program to find the frequency of the character in string.

#include <stdio.h>
int main() {
    char s[1000], ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    for (int i = 0; s[i] != '\0'; ++i)
        { if (ch == s[i])
            {++count;}}
    printf("Frequency of %c = %d", ch, count);
    return 0;
}
