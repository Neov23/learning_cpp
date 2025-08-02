#include <stdio.h>
void exercise(int par_1, int par_2, int par_3);
int main(void)
{
    printf("First call of \"exercise\" function (par_1 = 1, par_2 = 7, "
           "par_3 = 10):\n");
    exercise(1,7,10);
    printf("\nSecond call of \"exercise\" function (par_1 = 2, par_2 = 7, "
           "par_3 = 10):\n");
    exercise(2,7,10);
    printf("\nThird call of \"exercise\" function (par_1 = 3, par_2 = 7, "
           "par_3 = 10):\n");
    exercise(3,7,10);
    printf("\nFourth call of \"exercise\" function (par_1 = 8, par_2 = 7, "
           "par_3 = 10):\n");
    exercise(8,7,10);
    printf("\n\nTerminating the program...\n");
    return 0;
}
void exercise(int par_1, int par_2, int par_3)
{
    if (par_1==1)
        printf("%d\n",par_2+par_3);
    else if (par_1==2)
        printf("%d\n",par_2*par_3);
    else if (par_1==3)
        printf("%.2f\n",(par_2+par_3)/2.0);
    else
        printf("\nError! Wrong function call.\n");
}
