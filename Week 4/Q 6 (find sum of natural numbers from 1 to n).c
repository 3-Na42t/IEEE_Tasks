#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Hello, This app is for finding sum of natural numbers from 1 to n\n");
    printf("plz, enter the number you want to stop at ..\n ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of %d natural numbers starting from 1 = %d",n,sum);
    return 0;
}
