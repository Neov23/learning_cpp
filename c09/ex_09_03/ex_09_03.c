#include <stdio.h>
int total(int num);
int main(void)
{
    int given_number,result;
    printf("Enter a positive integer number: ");
    scanf("%d",&given_number);
    result=total(given_number);

    printf("\nThe total of all integer numbers from 1 to %d, is: %d\n",
           given_number,result);
    return 0;
}
int total(int num)
{
    int i,sum;
    for (i=1,sum=0;i<=num;i++)
        sum+=i;
    return sum;
}
