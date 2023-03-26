// program to find the sum of all elements of the array

#include <stdio.h>    
int main()    
{    
    //Initialize array     
    int size, length ;    
    int i, sum = 0;    
    printf("How many elements you want to enter : ");
    scanf("%d",&size);
    int arr[size];
    for(i=0; i < size; i++)
        {printf("Enter : ");
        scanf("%d", &arr[i]); }  
    length = sizeof(arr)/sizeof(arr[0]); //length
    for (i = 0; i < length; i++) 
       {sum = sum + arr[i];}     
    printf("Sum of all the elements of an array: %d", sum);    
    return 0;    
}    