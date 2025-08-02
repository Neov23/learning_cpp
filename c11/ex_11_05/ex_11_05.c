#include <stdio.h>
int sum(int num_1, int num_2);
int main(void)
{
    int a,b,c,*p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=&c;
    printf("Enter two integer numbers (n1,n2): ");
    scanf("%d,%d",p1,p2);
    *p3=sum(*p1,*p2);
    printf("\nc=%d\n",*p3);
    return 0;
}

int sum(const int num_1, const int num_2)
{
    int total;
    total=num_1+num_2;
    return total;
}
