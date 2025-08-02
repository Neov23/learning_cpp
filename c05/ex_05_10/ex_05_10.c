#include <stdio.h>
int main(void)
{
    char ch1,ch2,ch3;
    printf("Enter three consecutive characters: \n");
    ch1=getchar();
    ch2=getchar();
    ch3=getchar();
    printf("\n%c%c%c\n",ch3,ch2,ch1);
    return 0;
}
