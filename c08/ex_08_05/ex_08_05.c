#include <stdio.h>
int main(void)
{
    int asterisk=0,counter=0;
    char ch;
    printf("Enter characters.\nProgram will stop when two asterisk have been "
           "inserted.\nIt will display how many characters are between the "
           "first and the second asterisk.\n\n");

    do
    {
        ch=getch();
        putchar(ch);
        if (ch=='*')
        {
            asterisk++;
            continue;
        }
        if (asterisk==1)
            counter++;

    } while (asterisk!=2);

    printf("\n\nBetween the two asterisks, you typed %d characters.\n",counter);
    return 0;
}
