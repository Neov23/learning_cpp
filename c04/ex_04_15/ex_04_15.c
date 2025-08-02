#include <stdio.h>
int main(void)
{
    int number,last_digit;
    printf("Enter an integer number: ");
    scanf("%d",&number);

    last_digit=number%10;
    printf("\nThe last digit of your number is '%d'\n",last_digit);
    return 0;
}
