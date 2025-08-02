#include <stdio.h>
int main(void)
{
    double A,B,result;
    printf("A = ");
    scanf("%lf",&A);
    printf("B = ");
    scanf("%lf",&B);
    result=A/(A+B)*B/(A-B)+pow(A,A+B)/pow(B,A-B);
    printf("\nIf A = %lf  and  B = %lf:\nA/(A+B)*B/(A-B)+pow(A,A+B)/pow(B,A-B) "
           "= %lf\n",A,B,result);
    return 0;
}
