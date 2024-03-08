#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    float num1, num2, result;
    printf("Hello, This app is for creating calculator using switch case and functions\n");
    printf("plz,Enter the equation in this form num (+ / - *) num\n");
    scanf("%f %c %f",&num1,&operation,&num2);
    switch(operation)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Errrrrrrrrrrrrrrrrrrrrrrrrror");
    }

    printf("%f%c%f=%f",num1,operation,num2,result);

    return 0;
}
