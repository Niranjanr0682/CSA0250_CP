/*compile and execute the c program to calculate arithmatic operators functions such as pow(x,n),add(x,n),
sum(x,n) mul(x,n) div(x,n) where x and n are the twu operands. get the input choice from the user.*/


#include <stdio.h>
#include <math.h>

int main() {
    int ch;
    float a1, a2, result;

    printf("Enter first operand: ");
    scanf("%f", &a1);
    printf("Enter second operand: ");
    scanf("%f", &a2);

    printf("Enter the operation to perform:\n");
    printf("1. To do Exponent\n");
    printf("2. To do summation\n");
    printf("3. To do subtraction\n");
    printf("4. To do multiplication\n");
    printf("5. To do division\n");

    scanf("%d", &ch);

    switch(ch) {
        case 1:
            result = pow(a1, a2);
            printf("the value of %.1f power %.1f is %.1f\n", a1, a2, result);
            break;
        case 2:
            result = a1 + a2;
            printf("the addition of given two operands%.1f and %.1f is %.1f\n", a1, a2, result);
            break;
        case 3:
            result = a1 - a2;
            printf("the subtraction of given two operands%.1f and %.1f is %.1f\n", a1, a2, result);
            break;
        case 4:
            result = a1 * a2;
            printf("the multiplication of given two operands%.1f and %.1f is %.1f\n", a1, a2, result);
            break;
        case 5:
            result = a1 / a2;
            printf("the division value of %.1f by %.1f is %.1f\n", a1, a2, result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
// int n1, n2;
// printf("Please enter first integer:");
// scanf("%d", &n1);
// printf("Please enter second integer:");
// scanf("%d", &n2);
// printf("the results are\n");
// printf("\tSummation      : %d\n", n1 + n2);
// printf("\tSubtraction    : %d\n", n1 - n2);
// printf("\tMultiplication : %d\n", n1 * n2);
// printf("\tDivision       : %d\n", n1 / n2);
// printf("\tModulo Division: %d", n1 % n2);

// return 0;
// }