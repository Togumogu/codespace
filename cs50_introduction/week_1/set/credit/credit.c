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
    long length_calc = credit_num;
    //calculate length
    int length = 0;
    for (int i = 0; 0 < length_calc; i++)
    {
        length_calc /= 10;
        length++;
    }
    //if card length not 13, 15 or 16 - quit out
    if (length != 15 && length != 16 && length != 13)
    {
        printf("INVALID: %i\n", length);
    }
    //calculation
    int first_calc = 0;
    int second_calc = 0;
    long calc = credit_num;
    for (int i = 0; 0 < calc; i++)
    {
        if (i % 2 == 1)
        {
            long tmp;
            tmp = calc % 10;
            tmp *= 2;
            for (int j = 0; 0 < tmp; j++)
            {
                second_calc += tmp % 10;
                tmp /= 10;
            }
        }
        else if (i % 2 == 0)
        {
            first_calc += (calc % 10);
        }
        calc /= 10;
    }
    int fin_calc = first_calc + second_calc;
    if (fin_calc % 10 != 0)
    {
        printf("INVALID\n");
    } else
    {
        long tmp = credit_num;
        for (int i = 0; 100 < tmp; i++)
        {
            tmp /= 10;
        }

        if (tmp <= 55 && tmp >= 51)
        {
            printf("MASTERCARD\n");
        }
        else if (tmp == 34 || tmp == 37)
        {
            printf("AMEX\n");
        }
        else if (tmp / 10 == 4)
        (
            printf("VISA\n")
        );
    }
}
