#include <stdio.h>

int main() {
    int arr[100], i, j, Size, Count = 0;
    printf("Please Enter the number of elements in an array \n");
    scanf("%d", &Size);
    printf("Please Enter %d elements of an array\n", Size);
    for (i = 0; i < Size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < Size; i++)
    {
        for (j = i + 1; j < Size; j++)
            {
            if (arr[i] == arr[j])
            {
                Count++;
                break;
            }
            }
    }
    printf("\n Total Number of Duplicate Elements in this Array  = %d ", Count);

    return 0;
}
