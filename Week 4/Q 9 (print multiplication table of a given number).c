#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    printf("Hello, This app is for printing multiplication table of a given number\n");
    printf("Enter number of the table you want \n ");
    scanf("%d",&num);

    for(i=1; i<=10; i++)
    {
        printf("%d*%d=%d\n",num,i,(num*i));
    }

    return 0;
}
