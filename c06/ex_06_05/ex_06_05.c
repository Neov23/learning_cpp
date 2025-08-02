#include <stdio.h>
int main(void)
{
    double n1,remainder;
    int n1_int,n2;
    printf("Enter the divisible (real) number: ");
    scanf("%lf",&n1);
    printf("Enter the divisor (integer number): ");
    scanf("%d",&n2);
    n1_int=n1;
    remainder=(n1_int%n2)+(n1-n1_int);
    printf("\nDivisible: %f\nDivisor: %d\nRemainder: %f\n",n1,n2,remainder);
    return 0;
}
