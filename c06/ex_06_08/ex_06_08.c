#include <stdio.h>
int main(void)
{
    float a,b,c,avg;
    printf("Enter your three grades in programming projects:\n");
    scanf("%f,%f,%f",&a,&b,&c);

    if (a<0 || a>20 || b<0 || b>20 || c<0 || c>20)
    {
        printf("\nInvalid grades.\nEach grade should vary from 0 to 20.\n");
        exit(1);
    }

    if (a<=b && a<=c)
        avg=(b+c)/2;
    if (b<=a && b<=c)
        avg=(a+c)/2;
    if (c<=a && c<=b)
        avg=(a+b);

    if (avg>=10)
        printf("\nYou passed the class with %.2f\n",avg);
    else
        printf("\nYou DIDN'T pass the class. Your grade is %.2f\n",avg);
    return 0;
}
