#include <stdio.h>
#include <stdlib.h>

int main()
{
    int week;
    printf("Hello,This app is for printing day of week name using switch case\n");
    printf("plz, Enter number of the day in the week...\n");
    scanf("%d", &week);

    switch(week)
    {
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        default:
            printf("what!\n the week is only 7 days ");
    }
    return 0;
}
