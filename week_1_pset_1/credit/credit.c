#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get input
    long credit_num;
    do
    {
        credit_num = get_long("Credit Card Number: ");
    }
    while (credit_num <= 0);
    //Check for lenght
    int num_length = 0;
    long count_length = credit_num;
    do
    {
        count_length = count_length / 10;
        num_length++;
        printf("%lu\n", count_length);
    }
    while (credit_num > 0);

    printf("%i\n", num_length);
}