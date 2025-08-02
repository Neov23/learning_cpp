#include <stdio.h>
int main(void)
{
    int number;
    printf("1-Display the word \"Hello\"\n2-Display the number \"2\"\n3-Display"
           " \"bye bye\"\n4-Don't do anything\n\n");
    scanf("%d",&number);

    if (number==1)
        printf("\nHello\n");
    if (number==2)
        printf("\n2\n");
    if (number==3)
        printf("\nbye bye\n");
    if (number==4)
        exit(0);
    if (number<=0 || number>=5)
        printf("\nWrong choice.\n");
    return 0;
}
