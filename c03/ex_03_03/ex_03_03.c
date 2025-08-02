#include <stdio.h>
int main(void)
{
    int n1,n2,n3,sum,product;
    float average;
    printf("Give first number: ");
    scanf("%d",&n1);
    printf("Give second number: ");
    scanf("%d",&n2);
    printf("Give third number: ");
    scanf("%d",&n3);

    sum=n1+n2+n3;
    product=n1*n2*n3;
    average=(n1+n2+n3)/3.0;

    printf("\nThe sum of %d, %d and %d is: %d",n1,n2,n3,sum);
    printf("\nThe product of %d, %d and %d is: %d",n1,n2,n3,product);
    printf("\nThe average of %d, %d and %d is: %f\n",n1,n2,n3,average);
    return 0;
}
