#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a=rand(),b=rand(),c=rand();
    float d;
    d=(a+b+c)/3.0;
    printf("%s %d %s %d %s %d %s %f", "A:",a,"  B:",b,"  C:",c,"  D:",d);
    return 0;
}
