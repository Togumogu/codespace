#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long func_num = get_long("long?  ");
    int set1 = 0;
    int digit1 = 0;

    do
    {
        digit1 = func_num % 10;
        printf("digit1 %i\n", digit1);
        func_num = func_num / 100;
        printf("funcnum after 2 digits: %lu\n", func_num);
        set1 += digit1;
        printf("set1: %i\n", set1);
    }
    while (func_num > 0);


}