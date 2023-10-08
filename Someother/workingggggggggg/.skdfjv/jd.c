#include<stdio.h>
int main()
{
    int a,b,rev=0,r;
    scanf("%d",&a);
    b=a;
    while (a>0)
    {
       r =a%10;
        rev=rev*10+r;
        a=a/10;
    }if(b==rev)
    {printf("palindrome no");
    }
    else
    {printf("not palindrome");
    }
    
}