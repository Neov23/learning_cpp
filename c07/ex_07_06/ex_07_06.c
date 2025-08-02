#include <stdio.h>
int main(void)
{
    int year;
    printf("Enter a year (i.e. 2022): ");
    scanf("%d",&year);

    if ((year%4==0) && (year%100!=0 || year%400==0))
        printf("\n%d is a leap year.\n",year);
    else
        printf("\n%d is a normal year.\n",year);
    return 0;
}
