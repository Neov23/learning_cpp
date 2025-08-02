#include <stdio.h>
#include <string.h>
int space_counter(char text[]);
int main(void)
{
    int spaces;
    char text[101];
    printf("Enter text:\n");
    gets(text);
    spaces=space_counter(text);
    printf("The program found %d spaces in your text.\n",spaces);
    return 0;
}

int space_counter(char text[])
{
    int i,counter=0;
    for (i=0;i<strlen(text);i++)
        if (text[i]==' ')
            counter++;
    return counter;
}
