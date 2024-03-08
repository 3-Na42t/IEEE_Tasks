#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1,l2,l3;
    printf("Hello, This app is for checking whether triangle is equilateral, scalene or isosceles\n");
    printf("Enter the length of sides of the triangle\n");
    scanf("%f\n%f\n%f",&l1,&l2,&l3);
    if  (l1==l2 && l1==l3 && l2==l3)
    {
        printf("Equilateral triangle");
    }
    else if (l1==l2 || l1==l3 || l2==l3)
    {
         printf("Isosceles triangle");
    }
    else
    {
          printf("Scalene triangle");
    }
    return 0;
}
