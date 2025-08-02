#include <stdio.h>
int main(void)
{
    double donation,total,highest,lowest;
    int participants=0;

    for (total=0;total<=100000;participants++)
    {
        printf("Donation amount: ");
        scanf("%lf",&donation);

        if (participants==0)
        {
            highest=donation;
            lowest=donation;
        }
        else
        {
            if (donation>highest)
                highest=donation;
            if (donation<lowest)
                lowest=donation;
        }
        total+=donation;
    }
    printf("\nTotal money: %.2f\nHighest donation: %.2f\nLowest donation: %.2f"
           "\nParticipants: %d\n",total,highest,lowest,participants);
    return 0;
}
