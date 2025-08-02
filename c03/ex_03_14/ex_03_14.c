#include <stdio.h>
int main(void)
{
    int a,b,draft;
    printf("Insert first number: ");
    scanf("%d",&a);
    printf("Insert second number: ");
    scanf("%d",&b);

    draft=a;
    a=b;
    b=draft;

    printf("\nLook! I've reversed the values:\n\nFirst number: %d\n"
           "Second number = %d\n",a,b);
    return 0;
}
