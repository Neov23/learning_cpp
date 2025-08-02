#include <stdio.h>
int main(void)
{
    double n1,n2,avg;
    printf("Enter two real numbers: ");
    scanf("%lf %lf",&n1,&n2);
    avg=(n1+n2)/2;
    printf("\nThe average of these two numbers is: %7.2f\n",avg);
    return 0;
}
