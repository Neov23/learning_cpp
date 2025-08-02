#include <stdio.h>
int main(void)
{
    float g1,g2,g3,avg;
    scanf("%f %f %f",&g1,&g2,&g3);
    if (!(g1==0 && g2==0 && g3==0))
    {
        avg=(g1+g2+g3)/3;
        if (avg<5)
        {
            printf("You failed!!!\n");
            printf("Average: %f\n",avg);
        }
        else
        {
            printf("You passed!!!\n");
            printf("Average: %f\n",avg);
        }
    }
    printf("End");
    return 0;
}
