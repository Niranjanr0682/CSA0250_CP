//program to swap the two elements using call by reference.

#include <stdio.h>
swap (int *, int *);
int main()
{
    int a, b;
    printf("\nEnter first value:");
    scanf("%d", &a );
    printf("\nEnter second value:");
    scanf("%d %d", &b);
    printf("\nBefore Swapping:\n");
    printf("\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping:\n");
    printf("\na = %d\nb = %d", a, b);
    return 0;
}
swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}