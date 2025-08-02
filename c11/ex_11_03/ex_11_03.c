#include <stdio.h>
int count_letter(const char *p, char ch);
int main(void)
{
    char *p,ch;
    int counter;
    p="sheep white and thick";
    printf("Enter a letter: ");
    scanf("%c",&ch);
    counter=count_letter(p,ch);

    printf("\n%d letter(s) '%c' found in string \"sheep white and thick\".\n",
           counter,ch);
    return 0;
}

int count_letter(const char *p, char ch)
{
    int counter=0;
    while (*p!='\0')
    {
        if (*p==ch)
            counter++;
        p++;
    }
    return counter;
}
