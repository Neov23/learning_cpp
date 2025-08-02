#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[201];
    printf("Enter text (max 200 characters):\n");
    gets(str);
    printf("\nInitial string:\n");
    puts(str);
    printf("\nSecond half of initial string:\n");
    puts(str+strlen(str)/2);
    return 0;
}
