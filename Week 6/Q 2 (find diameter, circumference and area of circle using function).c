#include <stdio.h>
#include <stdlib.h>
float dia (float r);
float cir (float r);
float are (float r);

int main()
{
    float r;
    // r is refer to radius
    printf("Hello, This app is for find diameter, circumference and area of circle using function\n");
    printf("plz,Enter the radius of the circle\n");
    scanf("%f",&r);
    float diameter = dia(r);
    float circumference = cir(r);
    float area = are(r);
    printf("the diameter of the circle is equal %.3f\nthe circumference of the circle is equal %.3f\nthe area of the circle is equal %.3f\n ",diameter,circumference,area);

    return 0;
}
float dia(float r)
{
    float d= r*2;
    return d;
}
float cir(float r)
{
    float c=2*3.14*r;
    return c;
}
float are(float r)
{
    float a=3.14*r*r;
    return a;
}
