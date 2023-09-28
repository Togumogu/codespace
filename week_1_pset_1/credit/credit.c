#include <cs50.h>
#include <stdio.h>
//
bool checkSum(long input_number);
//
int main(void)
{
    // Get input
    long credit_num;
    do
    {
        credit_num = get_long("Credit Card Number: ");
    }
    while (credit_num <= 0);
    //
    // Check for length
    int num_length = 0;
    long count_length = credit_num;
    do
    {
        count_length = count_length / 10;
        num_length++;
    }
    while (count_length > 0);
    //
    // Check for length being correct
    if (num_length != 15 && num_length != 16 && num_length != 13)
    {
        printf("INVALID\n");
        credit_num = get_long("Credit Card Number: ");
    }
    // Checksum func
    checkSum(credit_num);
}
//
// Checksum
bool checkSum(long input_number)
{
    // Part 2 - get remaining digits
    long num1 = input_number;
    int sum1 = 0;
    int digit1 = 0;
    //
    do
    {
        digit1 = num1 % 10;
        num1 = num1 / 100;
        sum1 += digit1;
    }
    while (num1 > 0);
    //
    // Part 1 - the complex part
    long num2 = input_number;
    int sum2 = 0;
    int digit2 = 0;
    int tmp2 = 0;
    //
    do
    {
        digit2 = (num2 / 10) % 10;
        num2 = num2 / 100;
        digit2 = digit2 * 2;
        //
        do
        {
            tmp2 = digit2 % 10;
            digit2 = digit2 / 10;
            sum2 += tmp2;
        }
        while (digit2 > 0);
    }
    while (num2 > 0);
    //
    // Add part 1 & part 2 and check if legit
    int total;
    total = sum1 + sum2;
    //
    if (total % 10 != 0)
    {
        printf("Card is legit\n");
        return true;
    }
    else
    {
        printf("INVALID\n");
        return false;
    }
}