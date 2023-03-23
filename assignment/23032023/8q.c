// Find the index  of first occurrence of X in the array of N elements, 
//if the element not present then print -1

#include <stdio.h>

int main() {
    int arr[100], n, x, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to search: ");
    scanf("%d", &x);
    for(i=0; i<n; i++) {
        if(arr[i] == x) {
            printf("%d is found at index %d.\n", x, i);
            return 0;
        }
    }
    printf("-1 the %d is not present in the array.\n", x);
    return 0;
}
