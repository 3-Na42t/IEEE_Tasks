#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x;
     // x is for the number of the month
    printf("Hello, This app is for finding number of days in month\n");
    printf(" plz, Enter the Month Number..\n");
    scanf("%d",&x);
    if(x == 1)
    {
        printf("31 days");
    }
    else if(x == 2)
    {
        printf("28 or 29 days");
    }
    else if(x == 3)
    {
        printf("31 days");
    }
    else if(x == 4)
    {
        printf("30 days");
    }
    else if(x == 5)
    {
        printf("31 days");
    }
    else if(x == 6)
    {
        printf("30 days");
    }
    else if(x == 7)
    {
        printf("31 days");
    }
    else if(x == 8)
    {
        printf("31 days");
    }
    else if(x == 9)
    {
        printf("30 days");
    }
    else if(x == 10)
    {
        printf("31 days");
    }
    else if(x == 11)
    {
        printf("30 days");
    }
    else if(x == 12)
    {
        printf("31 days");
    }
    else
    {
        printf("The year is 12 Months only...");
    }

    return 0;
}

