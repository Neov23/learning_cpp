#include <stdio.h>
int main(void)
{
    int day,month,total_days;
    printf("Enter a date(D/M):");
    scanf("%d/%d",&day,&month);

    total_days=--month*30+day;
    if (month>=2)
        total_days-=2;

    printf("\n%d days passed since the beginning of the year (given that each "
           "month has 30 days, except February that has 28).\n",total_days);
    return 0;
}
