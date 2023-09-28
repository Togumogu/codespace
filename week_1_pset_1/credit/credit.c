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
        count_length = count_length / 10;
        num_length++;
    }
    while (count_length > 0);
    //
    //Check for length being correct
    if (num_length != 15 && num_length != 16 && num_length != 13)
    {
        printf("Invalid Card Length\n");
        return 1;
    }
    //
    //Checksum

}