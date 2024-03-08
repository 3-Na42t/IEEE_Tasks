#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    // x is for the length, y is for the width, z is for area
    printf("Hello My Student!\n");
    printf("This app is for calculating the area of a rectangle\n");
    printf("plz, enter the length\n");
    scanf("%f",&x);
    printf("plz, enter the width\n");
    scanf("%f",&y);
    z = x * y;
    printf("The area is equal %f\n",z);
    return 0;
}
