#include <stdio.h>
#include <stdlib.h>
void auto_fill(float array[][3]);
int amount_excellent(float array[][3]);
int amount_failed(float array[][3]);

int main(void)
{
    const int students=50,subjects=3;
    const float base=9.5,excellent=18.5;
    int i,j,excellent_counter,failed_counter;
    float average,grades[students][subjects];

    auto_fill(grades);
    excellent_counter=amount_excellent(grades);
    failed_counter=amount_failed(grades);

    printf("Out of 50 students, %d had excellent grade (%.1f%%) and %d "
           "failed (%.1f%%).",excellent_counter,excellent_counter*100.0/students,
            failed_counter,failed_counter*100.0/students);
    printf("\n\n\nThe Analytics:\n\n");
    for (i=0;i<50;i++)
    {
        average=0;
        printf("STUDENT %d:\n",i+1);
        for (j=0;j<3;j++)
        {
            printf("Grade %d: %.0f\n",j+1,grades[i][j]);
            average+=grades[i][j];
        }
        average/=3;

        if (average>18.5)
            printf("[EXCELLENT] with average %.1f\n",average);
        else if (average<9.5)
            printf("[FAILED] with average %.1f\n",average);
        putchar('\n');
    }

    return 0;
}

void auto_fill(float array[][3])
{
    int i,j;
    for (i=0;i<50;i++)
        for (j=0;j<3;j++)
            array[i][j]=rand()%20;
    // Create student number 23 with excellent grades (since 'rand' creates none)
    array[22][0]=20;
    array[22][1]=19;
    array[22][2]=20;
}

int amount_excellent(float array[][3])
{
    int i,j,counter=0;
    float student_average;
    for (i=0;i<50;i++)
    {
        student_average=0;
        for (j=0;j<3;j++)
            student_average+=array[i][j];
        student_average/=3;
        if (student_average>18.5)
            counter++;
    }
    return counter;
}

int amount_failed(float array[][3])
{
    int i,j,counter=0;
    float student_average;
    for (i=0;i<50;i++)
    {
        student_average=0;
        for (j=0;j<3;j++)
            student_average+=array[i][j];
        student_average/=3;
        if (student_average<9.5)
            counter++;
    }
    return counter;
}
