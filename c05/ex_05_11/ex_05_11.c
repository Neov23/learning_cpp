#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number>=0 && number<=255)
        printf("\nASCII %d = %c\n",number,number);
    else
        printf("\nThe number is not signed in ASCII.\n");
    return 0;
}
