// 6. Predict the output or error(s) for the following program:

// main()
// {
// char string[]="Hello World";
// display(string);
// }
// void display(char *string)
// {
// printf("%s",string);
// }


/*the output for the above code is 
    Hello World*/

// modified code

void display(char *);

main()
{
char string[]="Hello World";
display(string);
}
void display(char *string)
{
printf("%s",string);
}

