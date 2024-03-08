#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,D,W,Y;
    // n is for number of total days, D is for days , W is for weeks , Y is for years
    printf("Hello this app is used for converting days to years, weeks and days\n");
    scanf("%d",&n);
    Y=n/365;
    W=(n-Y*365)/7;
    D=n - (Y*365+W*7);
    printf("the years is equal %d\n  weeks is equal %d\n  days is equal %d\n",Y,W,D);


    return 0;
}
