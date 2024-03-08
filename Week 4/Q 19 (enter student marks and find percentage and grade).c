#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sub1 , sub2, sub3;
    float sum;
    // sub1 is for the first subject ,sub2 is for the second subject ,sub3 is for the third subject , sum is for the total grade
    printf("Hello, This app is for entering student marks and find percentage and grade\n");
    printf("plz,Enter three subjects marks..\n ");
    scanf("%f\n%f\n%f",&sub1,&sub2,&sub3);
    sum = sub1 + sub2 + sub3;
    sum = sum / 3.0;
    printf("Percentage = %.3f\n", sum);
    if(sum >= 90)
    {
        printf("Grade A");
    }
    else if(sum >= 80)
    {
        printf("Grade B");
    }
    else if(sum >= 70)
    {
        printf("Grade C");
    }
    else if(sum >= 60)
    {
        printf("Grade D");
    }
    else if(sum >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
