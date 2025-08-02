#include <stdio.h>
int main(void)
{
    char character;
    printf("Press a button and submit it with <Enter>.\n");
    character=getchar();

    if (character>='a' && character<='z')
    {
        printf("\nYou entered the button \"%c\".\n",character);
        exit(0);
    }
    if (character>='0' && character<='9')
    {
        printf("\nThe character you entered is a digit.\n");
        exit(0);
    }
    printf("\nYou entered a character, that is NOT a digit, NOR a lowercase "
           "letter.\n");
    return 0;
}
