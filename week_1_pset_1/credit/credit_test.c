#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long test = get_long("number?");
    long calc1 = test / 10;
    long calc2 = test % 100;


    printf("%lu\n", calc1);
    printf("%lu\n", calc2);
}