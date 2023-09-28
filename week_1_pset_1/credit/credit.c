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
    //
    //Check for length
    int num_length = 0;
    long count_length = credit_num;
    do
    {
        printf("%lu\n", count_length);
        count_length = count_length / 10;
        num_length++;
        //check for what card?

    }
    while (count_length > 0);

    printf("%i\n", num_length);
}