#include <stdio.h>
int main(void)
{
    int returned_num,checkpoint,alarm_type,ok;
    printf("What number did the device return?\n");
    scanf("%d",&returned_num);

    checkpoint=(returned_num&240)>>4;
    alarm_type=(returned_num&12)>>2;
    ok=(returned_num&2)>>1;

    if (ok)
        printf("\nDevice works as expected (returned number = %d).\n\n",
               returned_num);
    else
    {
        printf("\nDevice doesn't work. A problem occured.\n");
        exit(0);
    }

    printf("Checkpoint: %d\n",checkpoint);

    if (alarm_type==0)
        printf("Alarm Type: None\n");
    if (alarm_type==1)
        printf("Alarm Type: Fire\n");
    if (alarm_type==2)
        printf("Alarm Type: Break-In\n");
    if (alarm_type==3)
        printf("Alarm Type: Smoke\n");

    return 0;
}
