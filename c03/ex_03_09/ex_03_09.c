#include <stdio.h>
int main(void)
{
    const float pi=3.141592;
    float radius,circumference,area;
    printf("Insert circle's radius (ακτίνα ρ) in meters: ");
    scanf("%f",&radius);

    circumference=2*pi*radius;
    area=pi*radius*radius;

    printf("\nCircle's circumference (περίμετρος) is %f meters.",circumference);
    printf("\nCircle's area (εμβαδόν) is %f meters.\n",area);
    return 0;
}
