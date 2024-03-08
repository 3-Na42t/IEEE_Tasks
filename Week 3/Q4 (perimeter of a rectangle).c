#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    // x is for the length, y is for the width, z is for perimeter
    printf("Hello My Student!\n");
    printf("This app is for calculating the perimeter of a rectangle\n");
    printf("plz, enter the length\n");
    scanf("%f",&x);
    printf("plz, enter the width\n");
    scanf("%f",&y);
    z = 2 * (x + y);
    printf("The perimeter is equal %f\n",z);
    return 0;
}
