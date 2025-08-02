#include <stdio.h>
int main(void)
{
    float liters,euros,price_per_liter;
    printf("How many liters did you get?\n");
    scanf("%f",&liters);
    printf("How many Euros did you pay for %f liters?\n",liters);
    scanf("%f",&euros);
    price_per_liter=euros/liters;
    printf("\nPrice per liter: %f Euros\n\n",price_per_liter);

    if (price_per_liter>1.7)
        printf("The price is expensive.\n");
    else
        printf("The price is cheap.\n");
    return 0;
}
