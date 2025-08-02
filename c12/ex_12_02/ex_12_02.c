#include <stdio.h>
int main(void)
{
    int i,max,max_num,array[100];
    for (i=0;i<100;i++)
    {
        array[i]=rand();
        printf("Array number %d = %d\n",i,array[i]);
        if (i==0)
            max=array[0];
        else
            if (max<array[i])
            {
                max=array[i];
                max_num=i;
            }
    }
    printf("\nMax number = %d\nArray number of Max = %d\nMax number Slot = %d\n"
           "First Slot = %d\nLast Slot = %d\n",
           max,max_num,&array[max_num],&array[0],&array[99]);
    return 0;
}
