#include <stdio.h>
#include <stdlib.h>
int find_month(int day);
int find_day(int month);

int main(void)
{
    int i,day,month,charges[365],top_charge=0,top_day,top_month;
    printf("Yearly charges for customer n.%d, analyzed per day (DD/MM):\n\n",
           rand());
    for (i=1;i<=365;i++)
    {
        charges[i-1]=rand()%400;
        month=find_month(i);
        day=i-find_day(month);
        printf("%d/%d: %d Euros\n",day,month,charges[i-1]);

        if (charges[i-1]>top_charge)
        {
            top_charge=charges[i-1];
            top_month=find_month(i);
            top_day=i-find_day(top_month);
        }
    }
    printf("\nHighest charge:\n%d/%d: %d Euros\n",top_day,top_month,top_charge);
    return 0;
}

int find_month(int day)
{
    if (day<=31)
        return 1;
    if (day<=59)
        return 2;
    if (day<=90)
        return 3;
    if (day<=120)
        return 4;
    if (day<=151)
        return 5;
    if (day<=181)
        return 6;
    if (day<=212)
        return 7;
    if (day<=243)
        return 8;
    if (day<=273)
        return 9;
    if (day<=304)
        return 10;
    if (day<=334)
        return 11;
    if (day<=365)
        return 12;
}

int find_day(int month)
{
    if (month==1)
        return 0;
    if (month==2)
        return 31;
    if (month==3)
        return 59;
    if (month==4)
        return 90;
    if (month==5)
        return 120;
    if (month==6)
        return 151;
    if (month==7)
        return 181;
    if (month==8)
        return 212;
    if (month==9)
        return 243;
    if (month==10)
        return 273;
    if (month==11)
        return 304;
    if (month==12)
        return 334;
}
