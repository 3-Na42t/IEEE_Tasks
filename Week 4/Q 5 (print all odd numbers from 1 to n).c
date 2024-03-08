#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Hello, This app is for printing all odd numbers from 1 to n\n");
    printf("plz, Enter the number which the odd numbers will be printed for ... ");
    scanf("%d", &n);
    printf("odd numbers from 1 to %d are.....\n",n);
    for(i=1; i<=n; i+=2)
    {

        printf("%d\n", i);
    }





    return 0;
}
