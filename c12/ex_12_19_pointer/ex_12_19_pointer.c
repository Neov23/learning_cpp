#include <stdio.h>
#include <string.h>
int space_counter(char *ptr);
int main(void)
{
    int spaces;
    char text[101],*ptr;
    ptr=text;
    printf("Enter text:\n");
    gets(text);
    spaces=space_counter(ptr);
    printf("The program found %d spaces in your text.\n",spaces);
    return 0;
}

int space_counter(char *ptr)
{
    int i,counter=0;
    for (i=0;i<strlen(ptr);i++)
        if (*(ptr+i)==' ')
            counter++;
    return counter;
}
