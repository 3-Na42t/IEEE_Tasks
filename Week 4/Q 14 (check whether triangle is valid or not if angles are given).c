#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,x2,x3,sum=x1+x2+x3;
    // x1 is for the first angle , x2 is for the second angle , x3 is for the third angle , sum is for the total of the three angles
    printf("Hello, This app is for checking whether triangle is valid or not if angles are given\n");
    printf("plz, Enter the three angles \n");
    scanf("%f\n%f\n%f",&x1,&x2,&x3);
    if (sum==180 && x1>0 && x2>0 && x3>0 )
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }

    return 0;
}
