#include <stdio.h>
int main(void)
{
    int quantity;
    float price;
    printf("Enter product's quantity: ");
    scanf("%d",&quantity);
    printf("Enter product's price (per piece): ");
    scanf("%f",&price);

    if (quantity<=20 && quantity>0)
        printf("\nTotal cost: %.2f Euros (10%% charge)\n",quantity*price*1.1);
    else if (quantity>20 && quantity<80)
        printf("\nTotal cost: %.2f Euros\n",quantity*price);
    else if (quantity>=80 && quantity<=100)
        printf("\nTotal cost: %.2f Euros (15%% discount)\n",quantity*price*0.85);
    else if (quantity>100)
        printf("\nTotal cost: %.2f Euros (25%% discount)\n",quantity*price*0.75);
    else
        printf("\nNo products found.\n");
    return 0;
}
