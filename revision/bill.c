#include<stdio.h>
int main() {
    int n,i;
    printf("enter last month reading :");
    scanf("%d",&n);
    printf("enter current month reading :");
    scanf("%d",&i);
    int c;
    c = i-n;
    printf("\ntotal unit run for this month : %d\n",c);
    return 0;
}
