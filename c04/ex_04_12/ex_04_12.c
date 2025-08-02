#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d",&number);

    if (number%2==0)
        printf("\nThe number you entered (%d) is even.\n",number);
    else
        printf("\nThe number you entered (%d) is odd.\n",number);
    return 0;
}
