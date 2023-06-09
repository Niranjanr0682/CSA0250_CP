/*program to find the fair for travelling 30 km and the cost is 12rs/km and to give 
		output with the from to places ,total km, total fair.*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e ;
    printf("enter pick up point :");
    scanf("%d",&d);
    printf("enter drop point :");
    scanf("%d",&e);
    printf("enter total distance :");
    scanf("%d",&a);
    printf("enter cost per km :");
    scanf("%d",&b);
    c = a *b ;
    printf("from egmore to t nagar.\n");
    printf("total travelled distance %d.\n",a);
    printf("cost per km %d.\n",b);
    printf("total cost for travelling =  ₹%d .\n",c);

}
