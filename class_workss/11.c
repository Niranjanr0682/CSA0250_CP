// program to copy the elements of array into another array

#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int size,i;
    printf("How many elements you want to enter : ");
    scanf("%d",&size);
    int arr1[size];
    for(i=0; i < size; i++){
        printf("Enter : ");
        scanf("%d", &arr1[i]); }
    //Calculate length of array arr1    
    int length = sizeof(arr1)/sizeof(arr1[0]);    
    //Create another array arr2 with the size of arr1.    
    int arr2[length];    
    //Copying all elements of one array into another    
    for (int i = 0; i < length; i++) 
    {arr2[i] = arr1[i];}      
    //Displaying elements of array arr1     
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) 
    {printf("%d ", arr1[i]);}    
    printf("\n");    
    //Displaying elements of array arr2     
    printf("Elements of new array: \n");    
    for (int i = 0; i < length; i++) 
    {printf("%d ", arr2[i]);;}    
    return 0;    
}    