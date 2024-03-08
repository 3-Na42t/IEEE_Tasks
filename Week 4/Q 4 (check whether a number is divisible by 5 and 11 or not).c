#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    // x is for the number wanted to operate on it
    printf("Hello, This app is for checking whether a number is divisible by 5 and 11 or not\n");
    printf("plz, Enter the number\n");
    scanf("%d",&x);
    if((x%5==0)&&(x%11==0))
    {
        printf("This number is visible by 5 and 11");
    }
    else
    {
        printf("Sorry, Your number is not visible by 5 or 11");
    }



    return 0;
}
