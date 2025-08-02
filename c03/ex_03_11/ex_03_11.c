#include <stdio.h>
int main(void)
{
    const float E=0.23,A=0.7,T=0.15;
    int quantity;
    float total_price;
    char shipment_type;

    printf("Enter shipment type ('E' for same country, 'A' for overseas and "
           "'T' for local): ");
    scanf("%c",&shipment_type);
    printf("Enter product quantity: ");
    scanf("%d",&quantity);

    if (shipment_type=='E')
        total_price=E*quantity;
    if (shipment_type=='A')
        total_price=A*quantity;
    if (shipment_type=='T')
        total_price=T*quantity;
    if (total_price)
        printf("\nYou have to pay the price of %f for the %d products.\n",
               total_price,quantity);
    else
        printf("\nYou inserted wrong shipment type.\n");
    return 0;
}
