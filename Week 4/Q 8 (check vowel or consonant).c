#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    // x is for the operated on character
    printf("Hello,This app is for checking vowel or consonant \n");
    printf("plz, Enter the character\n");
    scanf("%c",&x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        {
            printf("the char %c is Vowel",x);
        }
    else
        {
            printf("the char %c is Constant",x);
        }

          return 0;
      }
