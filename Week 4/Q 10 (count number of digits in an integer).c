#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x;
    int count=0;
    printf("Hello, This app is for counting number of digits in an integer\n");
    printf("Enter ur number\n");
    scanf("%11d",&x);
    do {
        count++;
        x=x/10;
    }while (x =! 0);
    printf("the number of the digits is  ....%d",x);
    return 0;



}
