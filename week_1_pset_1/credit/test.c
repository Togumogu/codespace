#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long func_num = get_long("long?");
    int set1 = 0;
    int digit1 = 0;

    digit1 = (func_num % 10) / 10;
    printf("%i\n", digit1);
    set1 += digit1;
    printf("%i\n", set1);

}