// write a program to calculate the time difference between two cities.

#include <stdio.h>
#include<math.h> 
 
int main() 
{ 
    int t1hr, t1m, t2hr, t2m,thr,tm; 
    printf("Please enter the time in city 1 :"); 
    scanf("%i:%i", &t1hr, &t1m); 
    printf("Please enter the time in city 2 :"); 
    scanf("%i:%i", &t2hr, &t2m);
    if ((t1hr >=1 && t1hr <=24) &&(t2hr >=1 && t2hr <=24))
        {thr = t1hr - t2hr;
        if (thr < 0)
            {printf("city 2 is ahead then city 1");}
        else
            {printf("city 1 is ahead then city 2");}
        if (thr < 0) 
            {thr *= -1;}
            // printf("hr difference %i",thr);
        // else
            // printf("hr difference %i",thr);}
        }
    else
     {printf("invalid please enter correctly\n");}
    
    if ((t1m >=0 && t1m <=60) &&(t2m >=0 && t2m <=60))
        {tm = (t1m - t2m);
        if (tm < 0) 
            {tm *= -1;}
            // printf("min difference %i",tm);
        // else
            // printf("min difference %i",tm);}
        }
    else
        {printf("invalid enter correctly\n");}
    printf("\nthe time difference between two cities is %i hr and %i min",thr,tm);
        

    return 0; 
} 