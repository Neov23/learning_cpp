#include <stdio.h>
int main(void)
{
    int a[10]={5,8,9,4,2,1,7,5,6,2},i;
    for (i=0;i<10;i++)
        if (*(a+i)%2!=0) (*(a+i))++;
    for (i=0;i<10;i++)
        printf("%d\n",*(a+i));
    return 0;
}
