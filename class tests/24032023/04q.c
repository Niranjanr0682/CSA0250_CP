//  4. write a program in c to swap elements using call by reference

#include <stdio.h>
swap (int *, int *);
int main()
{
    int a, b;
    printf("\nEnter value of a & b:\n");
    scanf("%d %d", &a, &b);
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