#include <stdio.h>
int main(void)
{
    int i,grades[10];
    float avg;
    printf("Enter 10 student grades:\n");
    for (i=0;i<10;i++)
        scanf("%d",&grades[i]);
    for (i=0;i<10;i++)
        avg+=grades[i];
    avg/=10;

    printf("\nHere are the above average grades:\n");
    for (i=0;i<10;i++)
        if (avg<grades[i])
            printf("%d\n",grades[i]);
    return 0;
}
