#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int row,column,max,max_row,max_column,a[100][20];
    // Fill all elements of "a" array with random integers
    for (row=0;row<100;row++)
        for (column=0;column<20;column++)
            a[row][column]=rand();
    // Display all numbers of "a" array and the highest number of each row
    for (row=0;row<100;row++)
    {
        max=0;
        max_row=0;
        max_column=0;
        printf("Row %d:\n\n",row);
        for (column=0;column<20;column++)
        {
            printf("a[%d][%d] = %d\n",row,column,a[row][column]);
            // If above element is higher than max, then store this as max
            if (a[row][column]>max)
            {
                max=a[row][column];
                max_row=row;
                max_column=column;
            }
        }
        printf("\nMax number of row %d = %d (a[%d][%d])\n\n\n",
               row,max,max_row,max_column);
    }
    printf("\n");
    return 0;
}
