#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int a,b,c,d,e,f,year,counter,year_start,year_end;
    bool leap_year;

    printf("This program displays all Greek Carnival dates between the two "
           "selected years.\n\nEnter starting year: ");
    scanf("%d",&year_start);
    printf("Enter ending year: ");
    scanf("%d",&year_end);
    printf("\n");

    for (year=year_start;year<=year_end;year++)
    {
        if (((year%4==0) && (year%100!=0)) || (year%400==0))
            leap_year=true;
        else
            leap_year=false;

        a=year%19;
        b=year%4;
        c=year%7;
        d=(19*a+16)%30;
        e=(2*b+4*c+6*d)%7;
        f=leap_year;
        counter=d+e+f+13;

        if (leap_year)
        {
            if (counter<29)
                printf("Carnival date for %d: February %d.\n",year,counter);
            else
                printf("Carnival date for %d: March %d.\n",year,counter-29);
        }
        else
        {
            if (counter<28)
                printf("Carnival date for %d: February %d.\n",year,counter);
            else
                printf("Carnival date for %d: March %d.\n",year,counter-28);
        }

    }
    return 0;
}
