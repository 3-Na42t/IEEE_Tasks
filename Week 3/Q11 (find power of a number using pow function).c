#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,p;
    //x is for base , y is for expo , p is for power
    printf("Hello this app is used to find power of a number using pow function\n");
    printf("plz,Enter the value of the base\n");
    scanf("%f",&x);
    printf("plz,Enter the value of the expo\n");
    scanf("%f",&y);
    p=pow(x,y);
    printf("%f ^ %f = %f",x,y,p);

    return 0;

}
