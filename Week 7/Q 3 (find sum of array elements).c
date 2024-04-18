#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int i,y,sum =0;
    printf("Hello,This app is for finding sum of array elements\n");
    printf("plz,Enter the element number of the array\n");
    scanf("%d",&y);
    printf("plz,Enter the %d element of the array\n",y);
    for(i=0;i<y;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<y;i++)
    {
        sum+=arr[i];
    }
    printf("the sum of the %d element of the array is equal: %d",y,sum);
    return 0;
}
