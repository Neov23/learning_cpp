#include <stdio.h>
int main(void)
{
    int hours,minutes,seconds,total_seconds;
    printf("Enter seconds: ");
    scanf("%d",&total_seconds);

    hours=total_seconds/3600;
    minutes=(total_seconds-hours*3600)/60;
    seconds=total_seconds%60;

    printf("\n%d seconds are:\n\n%d hours\n%d minutes\n%d seconds\n",
           total_seconds,hours,minutes,seconds);
    return 0;
}
