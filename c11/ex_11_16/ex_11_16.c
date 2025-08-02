#include <stdio.h>
int main(void)
{
    int a,*p1,**p2,***p3;
    p1=&a;
    p2=&p1;
    p3=&p2;
    ***p3=50;
    printf("a=%d\n",a);
    return 0;
}
