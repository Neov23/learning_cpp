#include <stdio.h>
void digits_in_string(const char *ch);

int main(void)
{
    char *ch;
    ch="Enter string here. 1337 code, eh?";
    digits_in_string(ch);
    return 0;
}

void digits_in_string(const char *ch)
{
    while (*ch!='\0')
    {
        if (*ch>='0' && *ch<='9')
            putchar(*ch);
        *ch++;
    }
    printf("\n");
}
