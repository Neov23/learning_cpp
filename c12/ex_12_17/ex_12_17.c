#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,j,k,counter,next;
    char text[101];
    printf("Enter text (max 100 characters):\n");
    gets(text);

    for (i=0;i<strlen(text);i++)
    {
        counter=1;
        next=0;
        for (k=0;k<i;k++)
            if(text[i]==text[k])
            {
                next=1;
                break;
            }
        if (next) continue;
        for (j=i+1;j<strlen(text);j++)
            if(text[i]==text[j])
                counter++;
        printf("The character %c appears %d times.\n",text[i],counter);
    }
}
