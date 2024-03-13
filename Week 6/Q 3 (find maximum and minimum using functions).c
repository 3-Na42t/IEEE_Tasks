#include <stdio.h>
#include <stdlib.h>
int a (int x, int y);
int b (int x, int y);
int main()
{
    int x,y;
    printf("Hello,This app is for finding maximum and minimum using functions\n");
    printf("plz,Enter the two numbers...\n");
    scanf("%d\n%d",&x,&y);
    int max =a (x,y);
    int min =b (x,y);
    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d",min);
    return 0;
}
int a (int x,int y)
{
int    a = x>y?x:y;
   return a;
}
int b (int x, int y)
{
    int    b = x<y?x:y;
    return b;
}



