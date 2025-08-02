#include <stdio.h>
int main(void)
{
    char ch1,ch2;
    int n1,n2;
    printf("Enter a character and an integer number: ");
    scanf("%c %d",&ch1,&n1);
    printf("You gave \"%c\" and \"%d\"\n",ch1,n1);
    printf("Enter another character and integer number: ");
    fflush(stdin);
    scanf("%c %d",&ch2,&n2);
    printf("You gave \"%c\" and \"%d\"\n",ch2,n2);
    return 0;
}
