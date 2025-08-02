#include <stdio.h>
int main(void)
{
    int i;
    char students_list[10][20],ch;
    printf("Enter the names of 10 students (in greeklish).\n");
    for (i=0;i<10;i++)
        gets(students_list[i]);
    printf("\nEnter a character.\n");
    ch=getch();

    printf("Below are displayed the student's names that start with the same "
           "letter that you gave.\n\n");
    for (i=0;i<10;i++)
        if (students_list[i][0]==ch || students_list[i][0]==ch-32 ||
            students_list[i][0]==ch+32)
            puts(students_list[i]);
    return 0;
}
