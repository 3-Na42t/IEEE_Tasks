#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T,F;
    // T is for the temp at celsius , F is for the temp at fahrenheit
    printf("Hello, This app is for converting temperature from degree celsius to fahrenheit!\n");
    printf("plz,Enter the temperature in degree clesius\n");
    scanf("%f",&T);
    F = T*1.8+32 ;
    printf("the temperature in degree fahrenheit is equal %f\n",F);
    return 0;
}
