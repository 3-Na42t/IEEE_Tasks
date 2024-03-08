#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x, R;
    // x is for the number which we want the square root of it , R is for the square root
    printf("Hello this app is used for finding square root of a number\n");
    printf("plz, Enter the value you want to find square root of\n");
    scanf("%f",&x);
    R = sqrt(x);
    printf(" the square root of %f is equal %f",x,R);
    return 0;
}
