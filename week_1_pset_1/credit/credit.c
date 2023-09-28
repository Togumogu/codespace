#include <cs50.h>
#include <stdio.h>

void checkSum(long credit_num);

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
}
//
//Checksum
void checkSum(long credit_num)
{
    //Part 2 - get remaining digits
    long num1 = credit_num
    int set1 = 0;
    int digit1 = 0;

    do
    {
        digit1 = num1 % 10;
        num1 = num1 / 100;
        sum1 += digit1
    }

    //Add part 1 & part 2
    int total;
    total = sum1 + sum2;
}