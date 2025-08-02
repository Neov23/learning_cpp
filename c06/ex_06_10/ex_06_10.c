#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    char character;
    int number;
    bool comparison=false;
    printf("Enter a single character: ");
    scanf("%c",&character);
    printf("Enter an integer number: ");
    scanf("%d",&number);

    if (48+number==character)
        comparison=true;

    printf("\nCharacter = '%c'\nASCII code of '%c' = %d\nInteger number = %d\n\n"
           "Comparison = %d\n",character,character,character,number,comparison);
    return 0;
}
