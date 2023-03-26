// Program to find maximum and minimum occurring character in a string.

#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[100];
    printf("enter string : ");
    fgets(string,100,stdin);
    int i, j, min, max, length = strlen(string);  
    char maxChar = string[0];
    char minChar = string[0]; 
    int freq[length];
    //Count each word in given string and store in array freq  
    for(i = 0; i < length; i++)
        {freq[i] = 1;  
        for(j = i+1; j < length; j++) 
        {if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') 
            {freq[i]++;  
            string[j] = '0';}}}                     //avoid printing visited character
     
    min = max = freq[0];  
    for(i = 0; i < length; i++)                     //If min is greater than frequency of a character   
        {if(min > freq[i] && freq[i] != '0')        //then, store frequency in min and corresponding character in minChar 
            {min = freq[i];  
            minChar = string[i];} 
        if(max < freq[i])                           //If max is less than frequency of a character   
            {max = freq[i];                         //then, store frequency in max and corresponding character in maxChar 
            maxChar = string[i];}}  
        
    printf("Maximum occurring character: %c\n", maxChar);  
    printf("Minimum occurring character: %c\n", minChar);      
    return 0;  
} 