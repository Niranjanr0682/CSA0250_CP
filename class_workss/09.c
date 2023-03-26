// program to store elements in an array and print them

#include<stdio.h>
int main()    
{    
    int size,i;
    printf("How many elements you want to enter : ");
    scanf("%d",&size);
    int arr[size];
    for(i=0; i < size; i++)
        {printf("Enter : ");
        scanf("%d", &arr[i]);}    
    int length = sizeof(arr)/sizeof(arr[0]);    //length
    printf("Elements of given array: \n");      //printing  
    for (int i = 0; i < length; i++)  
        {printf("%d ", arr[i]);}     
    return 0;    
}      