#include <stdio.h>
int main(void)
{
    float weight,height,bmi;
    printf("Insert your weight (kg): ");
    scanf("%f",&weight);
    printf("Insert your height (m): ");
    scanf("%f",&height);
    bmi=weight/(height*height);
    printf("\nYour weight (kg): %f\nYour height (m): %f\nYour BMI: %f\n",
           weight,height,bmi);
    return 0;
}
