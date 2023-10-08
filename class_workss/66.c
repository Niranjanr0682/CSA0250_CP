// write a program to check the given number is prime or not.

// #include <stdio.h>
// int main(void)
// {
//     int n, check=1;
//     printf("Enter an integer : ");
//     scanf("%i", &n);
//     for(int i=2; i<=n/2; i++)
//         {if(n%i==0)
//             {check=0;
//             break;}}
//     if(check==1 && n != 1)
//         printf("The given number %i is Prime number!",n);
//     else
//         printf("The given number %i is Not a prime number!",n);
// }



// #include <stdio.h> 

main() {
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  //logic
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("n is a Prime number");
  }
  else {
         printf("n is not a Prime number");
  }
  return 0;    
}