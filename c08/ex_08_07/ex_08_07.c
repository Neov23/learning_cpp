#include <stdio.h>
int main(void)
{
    int ch,counter=0;
    printf("All ASCII characters from 32 to 255.\n\n");

    for (ch=32;ch<256;ch++,counter++)
    {
        if (counter==30)
        {
            putchar('\n');
            counter=0;
        }
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}
