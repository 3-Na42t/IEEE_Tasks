#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,N,num;
    printf("Hello,This app is for clearing nth bit of a number\n");
    printf("plz,Enter the number..");
    scanf("%d",&num);
    printf("\nplz,Enter the number of bit..");
    scanf("%d",&x);
    N = num & (~(1 << x));
    printf("the new number is %d",N);
    return 0;
}
