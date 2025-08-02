#include <stdio.h>
int main(void)
{
    int eng_cap;
    char ch;
    printf("Enter characters. To exit, enter '*'\n");
    do
    {
        ch=getch();
        putchar(ch);
        if (ch>='A' && ch<='Z')
            eng_cap++;
    } while (ch!='*');
    printf("\nYou entered '%d' capital latin characters\n",eng_cap);
    return 0;
}
