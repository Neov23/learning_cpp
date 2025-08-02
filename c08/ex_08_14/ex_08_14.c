#include <stdio.h>
int main(void)
{
    int num;
    for (num=1;num<=100;num++)
    {
        if (num==100)
            printf("%d.\n",num);
        else if (num%10!=0)
            printf("%d, ",num);
        else
            printf("%d,\n",num);
    }
}
