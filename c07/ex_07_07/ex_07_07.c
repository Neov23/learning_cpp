#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter a single character: ");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'K':
            printf("\nGood Morning!\n");
            break;
        case '2':
            printf("\n2\n");
            break;
        case 'T':
            printf("\nEnd\n");
            break;
        default:
            printf("\nWrong choice\n");
    }
    return 0;
}
