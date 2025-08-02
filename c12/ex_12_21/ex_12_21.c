#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,j;
    char n[50][20];
    printf("Enter 50 names.\n");
    for (i=0;i<50;i++)
    {
        gets(n[i]);
        for (j=0;j<i;j++)
            if (!(strcmp(n[i],n[j])))
            {
                printf("This name already exists in list. Try again.\n");
                strcpy(n[i],"");
                i--;
                break;
            }
    }
    printf("\nBelow are displayed all names that you entered:\n");
    for (i=0;i<50;i++)
        puts(n[i]);
    return 0;
}
