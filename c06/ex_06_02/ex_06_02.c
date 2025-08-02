#include <stdio.h>
#define PI 3.141592653589793
int main(void)
{
    double area,r;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&r);
    area=PI*pow(r,2);
    printf("The area of a circle with %f radius is: %f\n",r,area);
    return 0;
}
