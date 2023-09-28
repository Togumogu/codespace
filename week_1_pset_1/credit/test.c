#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long func_num = get_long("long?");
    int set1 = 0;
    int digit1 = 0;

    do
    {
        digit1 = (func_num % 10) / 10;
        set1 += digit1;
    }
    while (func_num > 0);

}