#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    // x,y are the two numbers we will operate with
    int sum,sub,multi,mod;
    float divi;
    // sum is for summation , sub is for subtraction, multi is for multiplication, divi is for division, mod is for modulus
    printf("plz,Enter the first num\n");
    scanf("%d",&x);
    printf("plz,Enter the second num\n");
    scanf("%d",&y);
    sum = x + y;
    sub = x - y;
    multi = x * y;
    mod = x % y;
    divi = (float)x / y;
    printf("the summation is %d\n",sum);
    printf("the subtraction is %d\n",sub);
    printf("the multiplication is %d\n",multi);
    printf("the division is %f\n",divi);
    printf("the modulus is %d\n",mod);


    return 0;
}
