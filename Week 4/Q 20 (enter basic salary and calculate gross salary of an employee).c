#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basic, gross, da, hra;
    printf("Hello, This app is for entering basic salary and calculate gross salary of an employee\n");
    printf("plz, Enter basic salary ..\n ");
    scanf("%f", &basic);
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }
    gross = basic + hra + da;

    printf("Gross salary is equal %f", gross);

    return 0;
}
