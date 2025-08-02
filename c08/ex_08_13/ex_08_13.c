#include <stdio.h>
int main(void)
{
    int digit,num,sum=0,power_of_ten=1;
    printf("Enter a positive integer number: ");
    scanf("%d",&num);

    while (num>=power_of_ten)
    {
        power_of_ten*=10;
        digit=(num%power_of_ten)/(power_of_ten/10);
        sum+=digit;
    }

    printf("\nYou entered the number %d.\nIf we add each digit from this "
           "number, the result would be %d\n",num,sum);
    return 0;
}
