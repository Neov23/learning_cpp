#include <stdio.h>
char *first_space(const char *string);
int main(void)
{
    char *string,*space_1;
    string="Enter string here.";
    space_1=first_space(string);
    printf("\nPointer of 'string': %d\nPointer of 'space_1': %d\n",string,
           space_1);
    return 0;
}

char *first_space(const char *string)
{
    while (*string!='\0')
    {
        if (*string==' ')
            return string;
        else
            string++;
    }
}
