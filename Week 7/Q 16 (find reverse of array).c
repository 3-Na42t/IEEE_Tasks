#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,arr[100];
    printf("Hello,This app is for finding reverse of array\n");
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    printf("Enter the %d Elements of the array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array in reverse order\n ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
