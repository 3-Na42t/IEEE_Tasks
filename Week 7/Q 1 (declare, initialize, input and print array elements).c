#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i;
    printf("Enter 10 elements in the array : ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");
    for(i=0; i<10; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
