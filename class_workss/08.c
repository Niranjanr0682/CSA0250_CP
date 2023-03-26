// program to read the n number of values in an array and display them in reverse order

#include <stdio.h>    
int main()    
{        
    int size,i;
    printf("How many elements you want to enter : ");
    scanf("%d",&size);
    int arr[size];
    for(i=0; i < size; i++)
        {printf("Enter : ");
        scanf("%d", &arr[i]); }        
    int length = sizeof(arr)/sizeof(arr[0]);    //length
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++)
        {printf("%d ", arr[i]);}      
    printf("\n");    
    printf("Array in reverse order: \n");    //reverse order    
    for (int i = length-1; i >= 0; i--)    
        {printf("%d ", arr[i]);}      
    return 0;    
}