#include <stdio.h>
#include <stdlib.h>
int cub(int y);
int main()
{
    int x;
    printf("Hello, This app is for finding cube of a number using function\n");
    printf("plz,Enter the number\n");
    scanf("%d",&x);
    int f= cub(x);
    printf("the cube of %d is equal %d ",x,f);


    return 0;
}
int cub(int y)
{
   int cube=y*y*y;
   return cube;

}
