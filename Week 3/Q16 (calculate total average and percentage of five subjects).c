#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sub1,sub2,sub3,sub4,sub5,A,P,T;
    // sub1 is for the 1st subject ,sub2 is for the 2nd subject,sub3 is for the 3rd subject,sub4 is for the 4th subject,sub5 is for the 5th subject,A is for average , P is for percentage , T is for the total degree of the 5 subjects
    printf("Hello this app is used for calculating total average and percentage of five subjects\n");
    printf("plz,Enter the degree of your five subjects\n");
    scanf("%f\n%f\n%f\n%f\n%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    T=sub1+sub2+sub3+sub4+sub5;
    A=T/5;
    P=A*100/100;
    printf("The total degree of the five subject is equal %f\nThe average of the five subjects is equal %f6\nThe total percentage of the five subjects is equal %f\n",T,A,P);
    return 0;
}
