#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long test = get_long("number?");

    //First Digits

    int set1 = 0;
    long tmp1 = test;
    int digit1 = 0;

    do
    {
        digit1 = (tmp1 % 10) / 10;
        set1 += digit1;

    }
    while (tmp1 > 0);
    printf("%i\n", set1);
}
