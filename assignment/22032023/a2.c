// #include <stdio.h>

// int main() {
//     int n, re = 0, digit;

//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     // Reverse the digits of the number
//     while (n != 0) {
//         digit = n % 10;
//         re = re * 10 + digit;
//         n /= 10;
//     }

//     // Move the last digit to the first position and vice versa
//     digit = re % 10;
//     re /= 10;
//     re = re + digit * pow(10, floor(log10(re)) + 1);

//     // Reverse the digits of the number again
//     n = 0;
//     while (re != 0) {
//         digit = re % 10;
//         n = n * 10 + digit;
//         re /= 10;
//     }

//     printf("Result: %d\n", n);

//     return 0;
// }

#include <stdio.h>

int main()
    {int n, rn = 0, rr;
    printf("Enter the number to reverse: ");
    scanf("%d", &n);    
    while (n!=0)
    {   rr = n % 10;
        rn = rn * 10 + rr;
        n = n/10;
    }    
    printf("The reversed number is: %d", rn);
    return 0; }

