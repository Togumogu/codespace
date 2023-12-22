#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit_num;
    do
    {
        credit_num = get_long("Credit Card Number: ");
    }
    while (credit_num < 0);
    //calculate length
    int length = 0;
    for (int i = 0; 0 < credit_num; i++)
    {
        credit_num = credit_num / 10;
        length++;
    }
    //if card length not 13, 15 or 16 - quit out
    if (length != 15 && length != 16 && length != 13)
    {
        printf("INVALID\n");
    }
    else
    {
        int first_calc = 0;
        int second_calc = 0;
        for (int i = 0; 0 < credit_num; i++)
        {
            if (i % 2 = 0)
        }

    }
}