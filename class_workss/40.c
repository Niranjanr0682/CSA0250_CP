//program to swap the two elementsusing call by value.

#include <stdio.h>
swap (int, int);

int main()
    {int a, b;
    printf("\nEnter value of a & b:\n");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swapping:\n");
    printf("\na = %d\nb = %d\n", a, b);
    swap(a, b);
    return 0;}

swap (int x, int y)
    {int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter Swapping:\n");
    printf("\na = %d\nb = %d", x, y);
    }