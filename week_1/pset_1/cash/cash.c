#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents_owed;
    do
    {
        cents_owed = get_int("Cents Owed?: ");
    }
    while(cents_owed <= 0);
    return cents_owed;
}

int calculate_quarters(int cents)
{
    // TODO
    int quarter_no = 0;
    int minus_quarters = cents;
    do
    {
        minus_quarters = minus_quarters - 25;
        quarter_no++;
    }
    while (minus_quarters >= 25);
    return quarter_no;
}

int calculate_dimes(int cents)
{
    // TODO
    int dime_no = 0;
    int minus_dimes = cents;
    do
    {
        minus_dimes = minus_dimes - 10;
        dime_no++;
    }
    while (minus_dimes >= 10);
    return dime_no;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickel_no = 0;
    int minus_nickels = cents;
    do
    {
        minus_nickels = minus_nickels - 5;
        nickel_no++;
    }
    while (minus_nickels >= 5);
    return nickel_no;
}

int calculate_pennies(int cents)
{
    // TODO
    int penny_no = 0;
    int minus_pennies = cents;
    do
    {
        minus_pennies = minus_pennies - 1;
        penny_no++;
    }
    while (minus_pennies > 0);
    return penny_no;
}

