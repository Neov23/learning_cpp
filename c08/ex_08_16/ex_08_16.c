#include <stdio.h>
int main(void)
{
    int i;
    double best_1=0,best_2=0,grades,average=0,student=0;
    printf("Enter the grades of ten students:\n");
    for (i=1;i<=10;i++)
    {
        scanf("%lf",&grades);

        if (grades<0 || grades>10)
        {
            i--;
            printf("Grades should be between 0 and 10. Try again.\n");
            continue;
        }

        printf("Grades of student %d: %.2f\n",i,grades);
        average+=grades;
        if (i==1)
            best_1=grades;
        else if (i==2)
            best_2=grades;
        else
        {
            if (grades>best_1)
            {
                best_2=best_1;
                best_1=grades;
            }
            else if (grades>best_2)
                best_2=grades;
        }
    }

    average/=10;
    printf("\nAverage: %.2f\nBest Grade: %.2f\nSecond best grade: %.2f\n",
           average,best_1,best_2);
    return 0;
}
