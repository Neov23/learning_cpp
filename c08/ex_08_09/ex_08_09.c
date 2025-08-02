#include <stdio.h>
int main(void)
{
    int binary,decimal=0,power_of_ten=1,remainder,tool;
    printf("Enter a positive integer (!=0): ");

    while (decimal<=0)
    {
        scanf("%d",&decimal);
        if (decimal<=0)
            printf("\nYou should enter a number with greater value than 0. Try "
                   "again.\n");
    }

    for (tool=decimal;tool>0;power_of_ten*=10)
    {
        remainder=tool%2;
        binary+=remainder*power_of_ten;
        tool/=2;
    }

    printf("\nDecimal: %d\nBinary: %d\n\nNOTE! If you picked an integer with "
           "greater value than 1023, the result will be flawed.\n",decimal,
           binary);
    return 0;
}
