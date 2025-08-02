#include <stdio.h>
int main(void)
{
    double x,f;
    printf("f(x)=x*x*x*x-5*(x*x)+3\n");

    for (x=0;x<=1.01;x+=0.05)
    {
        printf("\nFor x = %.2f:\n",x);
        f=x*x*x*x-5*(x*x)+3;
        printf("%.2f\n",f);
    }
    return 0;
}
