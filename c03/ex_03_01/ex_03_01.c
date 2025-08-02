#include <stdio.h>
int main(void)
{
    int n1,n2,n3;
    float res;
    printf("Insert three numbers (divided by comma): ");
    scanf("%d, %d, %d",&n1,&n2,&n3);
    res=(n1+n2+n3)/3.0;
    printf("The average of %d, %d and %d is: %f.",n1,n2,n3,res);
    return 0;
}
