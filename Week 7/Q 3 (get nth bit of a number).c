#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,num,nthBit;
    //x is for the bit number && num is for the number
    printf("Hello,This app is for getting nth bit of a number\n");
    printf("plz,Enter the number\n");
    scanf("%d",&num);
    printf("plz,Enter the number of bit you want\n");
    scanf("%d",&x);
    nthBit = (num >> x) & 1;
    printf("%d bit of %d is %d",x,num,nthBit);
    return 0;
}
