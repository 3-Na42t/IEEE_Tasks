#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, x,N;
    printf("Hello,This app is for setting nth bit of a number\n");
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nEnter nth bit  ");
    scanf("%d", &x);
    N = (1 << x) | num;
    printf("%d",N);
    return 0;
}
