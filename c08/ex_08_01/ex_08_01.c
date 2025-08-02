#include <stdio.h>
int main(void)
{
    int num,sum;

    for (num=1,sum=0;num<=1000;num++)
        sum+=num;

    printf("The sum of all numbers from 1 to 1000 is: %d\n",sum);
    return 0;
}
