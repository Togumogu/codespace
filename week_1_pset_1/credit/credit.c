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

    

    int result10 = credit % 10;
    int result100 = credit % 100;
    int final = result100 % 100;

    printf("%i\n", result10);
    printf("%i\n", result100);
    printf("%i\n", final);
}