#include <stdio.h>
int main(void)
{
    double n1,n2,product;
    printf("Enter two real numbers: ");
    scanf("%lf %lf",&n1,&n2);
    product=n1*n2;
    printf("\n %9.2f\nx%9.2f\n%c%c%c%c%c%c%c%c%c%c\n %9.2f\n",n1,n2,205,205,205,
           205,205,205,205,205,205,205,product);
    return 0;
}
