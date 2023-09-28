#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long test = get_long("number?");

    int set1 = 0;
    long tmp1 = test;
    int digit1 = 0;

    //First Digits



    //Second Digits
    int set2 = 0;
    long tmp2 = test;
    int digit2 = 0;

    do
    {
        digit2 = (tmp2 % 100) / 10;
        printf("%i\n", digit2);
        set2 

    }
    while (tmp2 > 0)




    printf("%lu\n", calc1);
    printf("%lu\n", calc2);
    printf("%lu\n", calc3);
}