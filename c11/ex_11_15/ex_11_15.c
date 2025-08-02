#include <stdio.h>
void display_string(const char **p);
int main(void)
{
    char *p1,**p2;
    p1="sheep white and thick";
    p2=&p1;
    display_string(p2);
    printf("\n");
    return 0;
}

void display_string(const char **p)
{
    while (**p!='\0')
    {
        putchar(**p);
        (*p)++;
    }
}
