#include <stdio.h>
int main(void)
{
    int i, numbers[100];
    printf("Enter 100 integer numbers (each number should be higher than the"
           "previous one):\n");
    // Ask user to input 100 integers
    for (i=0;i<100;i++)
    {
        scanf("%d",&numbers[i]);
        // If integer is smaller than the previous, retry
        if (i>0 && !(numbers[i]>numbers[i-1]))
        {
            printf("You didn't give a higher number compared to the previous "
                   "one. Try again.\n");
            i--;
        }
    }
    // Display all elements of "numbers" array
    printf("\nYou gave the following numbers:\n");
    // Correct display related to "st-nd-rd-th" number-endings
    for (i=1;i<=100;i++)
        if ((i==1 || i%10==1) && !(i==11))
            printf("%dst number = %d\n",i,numbers[i-1]);
        else if ((i==2 || i%10==2) && !(i==12))
            printf("%dnd number = %d\n",i,numbers[i-1]);
        else if ((i==3 || i%10==3) && !(i==13))
            printf("%drd number = %d\n",i,numbers[i-1]);
        else
            printf("%dth number = %d\n",i,numbers[i-1]);
    printf("\n");
    return 0;
}
