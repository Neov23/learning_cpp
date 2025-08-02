#include <stdio.h>
void show_char();

int main (void)
{
    printf("I will call the \"show_char\" function 30 times.\n");
    for (int i=1;i<=30;i++)
    {
        printf("\nCall number %d: ", i);
        show_char();
    }
    printf("\n");
    return 0;
}

void show_char()
{
    static char a='a';
    if (a=='z'+1)
        a='a';
    printf("%c",a++);
}
