#include <stdio.h>
#include <stdbool.h>
int first_numbers();

int main(void)
{
    int i;
    printf("First numbers:\n\n");
    for (i=1;i<=100;i++)
        printf("%d: %d\n",i,first_numbers());
    return 0;
}

int first_numbers()
{
    static int first_number=0;
    int i;
    bool condition=true;
    while (condition)
    {
        condition=false;
        first_number+=1;
        for (i=2;i<=first_number/2;i++)
            if (first_number%i==0)
                condition=true;
    }
    return first_number;

}
