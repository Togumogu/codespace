#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long func_num = get_long("long?  ");

    long check_card = func_num;
    do
    {
        check_card = check_card / 10
    }
    while (check_card < 100);
    printf("%lu\n", check_card);
}