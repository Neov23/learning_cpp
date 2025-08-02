#include <stdio.h>
int main(void)
{
    int i,numbers[100];
    float avg;
    printf("Enter 100 integer numbers:\n");
    // Storing 100 integers (user input) in "numbers" array
    for (i=0;i<100;i++)
        scanf("%d",&numbers[i]);
    // Calculating the average of all numbers in "numbers" array
    for (i=0;i<100;i++)
        avg+=numbers[i];
    avg/=100;
    // Displaying the average
    printf("\nThe average of all numbers you gave, is %.1f",avg);
    return 0;
}
