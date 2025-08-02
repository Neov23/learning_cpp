#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void written_out_num(double num,char *pointer);
void monades(const int num,char *pointer);
void dekades(const int num,char *pointer);
void ekatontades(const int num,char *pointer);
void xiliades(const int num,char *pointer);
void dekades_xiliades(const int num,char *pointer);
void ekatontades_xiliades(const int num,char *pointer);

int main(void)
{
    double num;
    char str_num[150]="",end,*pointer;
    pointer=str_num;

    while (end!='q')
    {
        // Ask for a number and write it out with words
        printf("Enter a number: ");
        scanf("%lf",&num);
        written_out_num(num,pointer);
        printf("\nThe number written out in Greek (with two decimals): %s\n",
               str_num);

        // Ask if user wants to retry or quit
        printf("To exit, press 'q'. To continue, press any other key.");
        putchar('\n');
        end=getch();
        putchar('\n');

        // Empty all characters of string array, in case user wants to retry
        strcpy(str_num,"");
    }
    printf("\nTHANK YOU FOR USING THE PROGRAM!\n");
    return 0;
}

void monades(const int num,char *pointer)
{
    int int_num=num;

    if (int_num==1)
        strcat(pointer,"Ένα ");
    else if (int_num==2)
        strcat(pointer,"Δύο ");
    else if (int_num==3)
        strcat(pointer,"Τρία ");
    else if (int_num==4)
        strcat(pointer,"Τέσσερα ");
    else if (int_num==5)
        strcat(pointer,"Πέντε ");
    else if (int_num==6)
        strcat(pointer,"Έξι ");
    else if (int_num==7)
        strcat(pointer,"Επτά ");
    else if (int_num==8)
        strcat(pointer,"Οκτώ ");
    else if (int_num==9)
        strcat(pointer,"Εννέα ");
}

void dekades(const int num,char *pointer)
{
    int int_num=num;

    if (int_num>=90)
        strcat(pointer,"Ενενήντα ");
    else if (int_num>=80)
        strcat(pointer,"Ογδόντα ");
    else if (int_num>=70)
        strcat(pointer,"Εβδομήνα ");
    else if (int_num>=60)
        strcat(pointer,"Εξήντα ");
    else if (int_num>=50)
        strcat(pointer,"Πενήντα ");
    else if (int_num>=40)
        strcat(pointer,"Σαράντα ");
    else if (int_num>=30)
        strcat(pointer,"Τριάντα ");
    else if (int_num>=20)
        strcat(pointer,"Είκοσι ");
    else if (int_num==12)
        strcat(pointer,"Δώδεκα ");
    else if (int_num==11)
        strcat(pointer,"Έντεκα ");
    else if (int_num>=10)
        strcat(pointer,"Δέκα ");
}

void ekatontades(const int num,char *pointer)
{
    int int_num=num;

    if (int_num>=900)
        strcat(pointer,"Εννιακόσια ");
    else if (int_num>=800)
        strcat(pointer,"Οκτακόσια ");
    else if (int_num>=700)
        strcat(pointer,"Επτακόσια ");
    else if (int_num>=600)
        strcat(pointer,"Εξακόσια ");
    else if (int_num>=500)
        strcat(pointer,"Πεντακόσια ");
    else if (int_num>=400)
        strcat(pointer,"Τετρακόσια ");
    else if (int_num>=300)
        strcat(pointer,"Τριακόσια ");
    else if (int_num>=200)
        strcat(pointer,"Διακόσια ");
    else if (int_num>=101)
        strcat(pointer,"Εκατόν ");
    else if (int_num==100)
        strcat(pointer,"Εκατό ");
}

void xiliades_monades(const int num,char *pointer)
{
    int int_num=num;

    if (int_num==1)
        strcat(pointer,"Ένα ");
    else if (int_num==2)
        strcat(pointer,"Δύο ");
    else if (int_num==3)
        strcat(pointer,"Τρείς ");
    else if (int_num==4)
        strcat(pointer,"Τέσσερις ");
    else if (int_num==5)
        strcat(pointer,"Πέντε ");
    else if (int_num==6)
        strcat(pointer,"Έξι ");
    else if (int_num==7)
        strcat(pointer,"Επτά ");
    else if (int_num==8)
        strcat(pointer,"Οκτώ ");
    else if (int_num==9)
        strcat(pointer,"Εννέα ");
}

void xiliades_dekades(const int num,char *pointer)
{
    int int_num=num;

    if (int_num>=90)
        strcat(pointer,"Ενενήντα ");
    else if (int_num>=80)
        strcat(pointer,"Ογδόντα ");
    else if (int_num>=70)
        strcat(pointer,"Εβδομήνα ");
    else if (int_num>=60)
        strcat(pointer,"Εξήντα ");
    else if (int_num>=50)
        strcat(pointer,"Πενήντα ");
    else if (int_num>=40)
        strcat(pointer,"Σαράντα ");
    else if (int_num>=30)
        strcat(pointer,"Τριάντα ");
    else if (int_num>=20)
        strcat(pointer,"Είκοσι ");
    else if (int_num==12)
        strcat(pointer,"Δώδεκα ");
    else if (int_num==11)
        strcat(pointer,"Έντεκα ");
    else if (int_num>=10)
        strcat(pointer,"Δέκα ");
}

void xiliades_ekatontades(const int num,char *pointer)
{
    int int_num=num;

    if (int_num>=900)
        strcat(pointer,"Εννιακόσιες ");
    else if (int_num>=800)
        strcat(pointer,"Οκτακόσιες ");
    else if (int_num>=700)
        strcat(pointer,"Επτακόσιες ");
    else if (int_num>=600)
        strcat(pointer,"Εξακόσιες ");
    else if (int_num>=500)
        strcat(pointer,"Πεντακόσιες ");
    else if (int_num>=400)
        strcat(pointer,"Τετρακόσιες ");
    else if (int_num>=300)
        strcat(pointer,"Τριακόσιες ");
    else if (int_num>=200)
        strcat(pointer,"Διακόσιες ");
    else if (int_num>=101)
        strcat(pointer,"Εκατόν ");
    else if (int_num==100)
        strcat(pointer,"Εκατό ");
}

void written_out_num(double num,char *pointer)
{
    int i,digit[9],decimal[2],int_temp,num_decimal;
    double float_temp;
    // If num is negative, add "Μείον" to main string, and turn it into positive
    if (num<0)
    {
        strcat(pointer,"Μείον ");
        num*=-1;
    }
    int_temp=num;

    // Initialize all numbers of "digit" and "decimal" array as 0
    for (i=0;i<9;i++)
        digit[i]=0;
    for (i=0;i<2;i++)
        decimal[i]=0;

    // Store each integer digit of num to a separate variable of "digit" array
    for (i=8;i>=0;i--)
    {
        digit[i]=int_temp%10;
        int_temp/=10;
        if (int_temp<1)
            break;
    }
    int_temp=num;

    // Store decimal digits of num to "decimal" array
    float_temp=num-int_temp;
    num_decimal=float_temp*100;
    decimal[0]=num_decimal/10;
    decimal[1]=num_decimal%10;

    // Initialize int_temp and write out each digit in string array
    int_temp=num;

    // Millions
    if (digit[0]!=0)
        ekatontades(int_temp/1000000,pointer);
    if (digit[1]!=0)
        dekades(int_temp/1000000%100,pointer);
    if (digit[2]!=0 && !(int_temp/1000000%100==11 || int_temp/1000000%100==12))
        monades(int_temp/1000000%10,pointer);
    if (digit[0]!=0 || digit[1]!=0 || digit[2]!=0)
        strcat(pointer,"Εκατομμύρια ");

    // Thousands
    if (digit[3]==0 && digit[4]==0 && digit[5]==1)
        strcat(pointer,"Χίλια ");
    else
    {
        if (digit[3]!=0)
            xiliades_ekatontades(int_temp/1000%1000,pointer);
        if (digit[4]!=0)
            xiliades_dekades(int_temp/1000%100,pointer);
        if (digit[5]!=0 && !(int_temp/1000%100==11 || int_temp/1000%100==12))
            xiliades_monades(int_temp/1000%10,pointer);
        if (digit[3]!=0 || digit[4]!=0 || digit[5]!=0)
            strcat(pointer,"Χιλιάδες ");
    }

    // Hundreds
    if (digit[6]!=0)
        ekatontades(int_temp%1000,pointer);
    if (digit[7]!=0)
        dekades(int_temp%100,pointer);
    if (digit[8]!=0 && !(int_temp%100==11 || int_temp%100==12))
        monades(int_temp%10,pointer);

    // Decimals
    if (decimal[0]!=0 || decimal[1]!=0)
        strcat(pointer,"Κόμμα ");
    if (decimal[0]!=0)
        dekades(num_decimal,pointer);
    if (decimal[1]!=0 && !(num_decimal==11 || num_decimal==12))
        monades(num_decimal%10,pointer);
}
