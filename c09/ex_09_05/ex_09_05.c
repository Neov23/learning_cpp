#include <stdio.h>
void ver_1(void);
void ver_2(int repeat);

int main(void)
{
    int given_num;
    printf("Call ver_1 function:\n\n");
    ver_1();
    printf("");

    printf("\nEnter a number: ");
    scanf("%d",&given_num);
    printf("\nCall ver_2 function with '%d' as parameter\n\n",given_num);
    ver_2(given_num);

    printf("");
    return 0;
}

void ver_1(void)
{
    int i;
    for (i=1;i<=10;i++)
        printf("Understand the 'C' language!\n");
}
void ver_2(int repeat)
{
    int i;
    for (i=1;i<=repeat;i++)
        printf("Understand the 'C' language!\n");
}
