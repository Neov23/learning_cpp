#include <stdio.h>
int main(void)
{
    char character;
    printf("Press a button and submit it with <Enter>.\n");
    character=getchar();

    if (character>='0' && character<='9')
        printf("\n%c\n",character);
    if (character>='A' && character<='Z' || character>='a' && character<='z')
        printf("\n%c\n",++character);
    return 0;
}
