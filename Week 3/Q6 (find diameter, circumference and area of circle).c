#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,A,C,D;
    // r is for the radius, A is for the area, C is for circumference, D is for diameter
    printf("Hello My Student!\n");
    printf("This app is for finding diameter,circumference and the area of circle\n");
    printf("plz, enter the radius\n");
    scanf("%f",&r);
    D = 2 * r;
    C = 2 * 3.14 * r;
    A = 3.14 * (r * r);

    printf("The diameter is equal %f\n",D);
    printf("The area is equal %f\n",A);
    printf("The circumference is equal %f\n",C);

    return 0;
}
