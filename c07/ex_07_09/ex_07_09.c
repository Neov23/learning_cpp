#include <stdio.h>
int main(void)
{
    const double coffee=0.7;
    double cost,change;
    int quantity,cent10=0,cent20=0,cent50=0,euro1=0,euro2=0;
    printf("How many coffee's would you like to buy?\n");
    scanf("%d",&quantity);
    cost=coffee*quantity;
    change=5-cost;

    if (change>=2.0)
    {
        euro2=change/2.0;
        change-=euro2*2.0;
    }
    if (change>=1.0)
    {
        euro1=change/1.0;
        change-=euro1*1.0;
    }
    if (change>=0.5)
    {
        cent50=change/0.5;
        change-=cent50*0.5;
    }
    if (change>=0.2)
    {
        cent20=change/0.2;
        change-=cent20*0.2;
    }
    if (change>=0.1)
    {
        cent10=change/0.1;
        change-=cent10*0.1;
    }

    //I reset value of "change", to use it in printf
    change=5-cost;

    if ((cost>0) && (cost<=5))
        printf("\nYou bought %d coffee(s).\nTotal cost is %.2f.\nYou gave 5 "
               "Euros, so your change is %.2f\n\nAnalytically:\n2 Euro - %d "
               "coin(s)\n1 Euro - %d coin(s)\n50 Cent - %d coin(s)\n20 Cent - "
               "%d coin(s)\n10 Cent - %d coin(s)\n",
               quantity,cost,change,euro2,euro1,cent50,cent20,cent10);
    else if (cost>=5)
        printf("\nInsufficient payment.\n\nYour payment: 5 Euros\nTotal cost: "
               "%.2f\n",cost);
    else
        printf("\nWrong quantity.\n");
    return 0;
}
