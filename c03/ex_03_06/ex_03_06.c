#include <stdio.h>
int main(void)
{
    int n1,n2,n3;
    printf("Insert first number: ");
    scanf("%d",&n1);
    printf("Insert second number: ");
    scanf("%d",&n2);
    printf("Insert third number: ");
    scanf("%d",&n3);

    if (n1>n2 && n1>n3)
        printf("\nThe highest of the three numbers you inserted, is "
               "the FIRST number: %d.",n1);
    if (n2>n1 && n2>n3)
        printf("\nThe highest of the three numbers you inserted, is "
               "the SECOND number: %d.",n2);
    if (n3>n1 && n3>n2)
        printf("\nThe highest of the three numbers you inserted, is "
               "the THIRD number: %d.\n",n3);
        return 0;
}
