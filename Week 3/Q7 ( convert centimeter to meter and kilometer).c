#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello,This app is for convert the length from cm to km & m!\n");
    float d,Md,KMd;
    // d is for the distance in cm , Md is for converted distance in meter , KMd is for the converted distance in kilometer
    printf("plz, Enter the distance -wanted to be converted- in cm\n");
    scanf("%f",&d);
    Md = d/100;
    KMd = d*.00001;
    printf("the distance in meter is equal %f\n",Md);
    printf("the distance in kilometer is equal %f\n",KMd);
    return 0;
}
