#include <stdio.h>
void basic_calculator(int num, int *min, int *max, int *sum, int *digits);
int main(void)
{
    int x,min,max,sum,digits;
    printf("Enter an integer number: ");
    scanf("%d",&x);
    basic_calculator(x,&min,&max,&sum,&digits);
    printf("\nx = %d\n*min = %d\n*max = %d\n*sum = %d\n*digits = %d\n",x,min,
           max,sum,digits);
    return 0;
}

void basic_calculator(int num, int *min, int *max, int *sum, int *digits)
{
    int draft,a=9,b=0,c=0,d=0;
    while (num!=0)
    {
        draft=num%10;

        if (a>draft)
            a=draft;
        if (b<draft)
            b=draft;
        c+=draft;
        d++;

        num/=10;
    }
    *min=a;
    *max=b;
    *sum=c;
    *digits=d;
}
