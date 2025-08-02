#include <stdio.h>
int main(void)
{
    int tax_percent;
    float price,total;

    printf("Insert product's price: ");
    scanf("%f",&price);
    printf("Insert tax percent: ");
    scanf("%d",&tax_percent);

    total=price+price*tax_percent/100;
    printf("\nInitial price: %f\nPrice after %d percent tax addition: %f\n",
           price,tax_percent,total);
    return 0;
}
