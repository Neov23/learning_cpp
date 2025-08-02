#include <stdio.h>
int main(void)
{
    double num=1,sum;
    for (sum=0;num<=100;num++)
        sum+=1/num;
    printf("\n%lf\n",sum);
    return 0;
}
