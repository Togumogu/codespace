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
    int num_length
    do
    {
        
    }



    int result10 = credit % 10;
    int result100 = credit % 100;
    int final = result100 % 100;

    printf("%i\n", result10);
    printf("%i\n", result100);
    printf("%i\n", final);
}