/*9. write a program in c such that the program will read the elements of a one dimentional
    array,then compares the elements and finds which the largest two elements are in a given 
    array.*/

#include <stdio.h>
int main()
{
    int size;
    int i;
    int largest = -1;
    int secondLargest = -1;
    printf("How many elements you want to enter : ");
    scanf("%d",&size);
    int arr[size];
    for(i=0; i < size; i++)
        {printf("Enter : ");
        scanf("%d", &arr[i]);}
    for(i=0; i<size; i++)
      {if(arr[i] > largest)
        {secondLargest = largest;
        largest = arr[i];}
      else if(arr[i] > secondLargest)
      {secondLargest = arr[i];}}
    printf("First largest number is %d\n",largest);
    printf("Second largest number is %d\n",secondLargest);
}