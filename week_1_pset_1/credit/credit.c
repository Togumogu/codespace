#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit;
    do
    {
        credit = get_long("Credit Card Number: ");
    }
    while (credit < 0);

    long result10 = credit % 10;
    long result100 = credit % 100;

    printf("%l\n", result10);
    printf("%l\n", result100);
}