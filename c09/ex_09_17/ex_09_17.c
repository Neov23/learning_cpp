#include <stdio.h>
#include <stdbool.h>
bool increasing(num);
bool decreasing(num);
bool bouncy(bool increasing, bool decreasing);

int main(void)
{
    int num,counter;
    bool check_increase,check_decrease,check_bouncy;
    printf("All bouncy numbers from 100 to 9999:\n\n");

    for (num=100;num<=9999;num++)
    {
        check_increase=increasing(num);
        check_decrease=decreasing(num);
        check_bouncy=bouncy(check_increase,check_decrease);
        if (check_bouncy)
        {
            printf("%d\n",num);
            counter++;
        }
    }
    printf("\nThere are %d bouncy numbers between 100 and 9999.\n",counter);
    return 0;
}

bool increasing(num)
{
    int remainder,prev_digit=num%10;
    bool increasing=true;
    prev_digit=num%10;

    do
    {
        remainder=num%10;
        if (remainder>prev_digit)
            increasing=false;
        prev_digit=remainder;
        num=num/10;
    } while (num!=0);
    return increasing;
}

bool decreasing(num)
{
    int remainder,prev_digit=num%10;
    bool decreasing=true;
    prev_digit=num%10;

    do
    {
        remainder=num%10;
        if (remainder<prev_digit)
            decreasing=false;
        prev_digit=remainder;
        num=num/10;
    } while (num!=0);
    return decreasing;
}

bool bouncy(bool increasing, bool decreasing)
{
    if (increasing || decreasing)
        return false;
    else
        return true;
}
