#include <stdio.h>
#include <math.h>
int main(void)
{
    float weight,height,bmi;
    printf("Enter your weight in KG: ");
    scanf("%f",&weight);
    printf("Enter your height in meters: ");
    scanf("%f",&height);
    bmi=weight/pow(height,2);

    printf("\nYour BMI is %.2f\n\n",bmi);

    if ((bmi>6.0) && (bmi<=18.5))
        printf("You are underweight.\n");
    else if ((bmi>18.5) && (bmi<=25.0))
        printf("You are normal.\n");
    else if ((bmi>25.0) && (bmi<=30.0))
        printf("You are overweight.\n");
    else if (bmi>30)
        printf("WARNING! You are obese.\n");
    else
        printf("ERROR! Invalid weight or height.\n");
    return 0;
}
