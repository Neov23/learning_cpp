#include <stdio.h>
#include <stdbool.h>

const char* day_of_week(int day, int month, int year);
bool check_leap(int year);
void show_bank_holidays(int year);

int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    printf("\n");

    show_bank_holidays(year);

    return 0;
}

bool check_leap(int year)
{
    if (((year%4==0) && (year%100!=0)) || (year%400==0))
        return true;
    else
        return false;
}

const char* day_of_week(int day, int month, int year)
{
    int a,b1,b2,b3,c,d,sum,result;
    bool leap_year;
    a=365*(year-1);
    b1=(year-1)/4;
    b2=-(year-1)/100;
    b3=(year-1)/400;
    c=(367*month-362)/12;
    leap_year=check_leap(year);

    if (month<=2)
        d=0;
    else if (month>2 && leap_year)
        d=(-1);
    else
        d=(-2);

    sum=a+b1+b2+b3+c+d+day;
    result=sum%7;

    if (result==0)
        return "Sunday";
    else if (result==1)
        return "Monday";
    else if (result==2)
        return "Tuesday";
    else if (result==3)
        return "Wednesday";
    else if (result==4)
        return "Thursday";
    else if (result==5)
        return "Friday";
    else if (result==6)
        return "Saturday";
}

void show_bank_holidays(int year)
{
    printf("Feast of Lights (06/01/%d): %s\n",year,day_of_week(6,1,year));
    printf("25th March (25/03/%d): %s\n",year,day_of_week(25,3,year));
    printf("1st of May (01/05/%d): %s\n",year,day_of_week(1,5,year));
    printf("Assumption of Mary (15/08/%d): %s\n",year,day_of_week(15,8,year));
    printf("28th October (28/10/%d): %s\n",year,day_of_week(28,10,year));
    printf("Christmas (25/12/%d): %s\n",year,day_of_week(25,12,year));
    printf("Second day of Christmas (26/12/%d): %s\n",year,
           day_of_week(26,12,year));
}
