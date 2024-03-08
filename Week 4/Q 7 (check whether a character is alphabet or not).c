#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    // x is for the character operating on
    printf("Hello, This app is for checking whether a character is alphabet or not\n");
    printf("plz,Enter your character\n");
    scanf("%c",&x);
    if ((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
    {
        printf("Yesssss, Your character is alphabet");
    }
    else
    {
        printf("oh no, Your character is not alphabrt");
    }
    return 0;
}
