#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr [100];
    int i,y,Max1,Max2;
    printf("Hello,This app is for finding second largest number in array\n");
    printf("plz,Enter the number of elements of the array\n");
    scanf("%d",&y);
    printf("plz,Enter the %d elements of the array\n",y);
    for (i=0;i<y;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<y;i++)
    {
       if(arr[i] > Max1)
       {
           Max1=arr[i];
       }
       else if(arr[i] > Max2 && arr[i] < Max1)
       {
           Max2=arr[i];
       }
    }
    printf("the first max num is : %d\n",Max1);
    printf("the second max num is : %d",Max2);


    return 0;
}
