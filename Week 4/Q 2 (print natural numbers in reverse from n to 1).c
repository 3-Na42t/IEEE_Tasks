#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Hello, This app is for printing natural numbers in reverse from n to 1\n");
    printf("plz,Enter starting value: ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
