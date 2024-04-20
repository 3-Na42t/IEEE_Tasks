#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arr1[10], arr2[10];
    printf("Hello, This app is for copy all elements of one array to another\n");
    printf("Enter 10 elements of array : ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i=0; i<10; i++)
    {
        arr2[i] = arr1[i];
    }


    printf("\nElements of array1 are : ");
    for(i=0; i<10; i++)
    {
        printf("%d\t", arr1[i]);
    }

    printf("\nElements of array2 are : ");
    for(i=0; i<10; i++)
    {
        printf("%d\t", arr2[i]);
    }

    return 0;
}

