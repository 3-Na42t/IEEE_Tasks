#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n,z,o;
    int arr[100];
    printf("Hello, This app is for inserting an element in array\n");
    printf("plz,Enter the array size\n");
    scanf("%d",&n);
    printf("plz,Enter the elements for the array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d\t",&arr[i]);
    }
    label1:
    printf("Please enter position between 1 to %d\n", n);
    scanf("%d",&z);
    if(z > n+1 || z <= 0)
    {
        goto label1;
    }
    else
    {
    printf("plz,Enter the number you want to add\n");
    scanf("%d",&o);
    }
     for(i=n; i>=z; i--)
        {
            arr[i] = arr[i-1];
        }
    arr[z-1] = o;
    n++;
    printf("Array elements after insertion\n ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", arr[i]);
        }
    return 0;
}
