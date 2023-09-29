// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}
// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool valid_upper = false;
    bool valid_lower = false;
    bool valid_digit = false;
    bool valid_punct = false;
    //
    for (int i = 0; i <= strlen(password); i++)
    {
        if (isupper(password[i]))
        {
            valid_upper = true;
        }
        if else (islower(password[i]))
        {
            valid_lower = true;
        }
        if else (isdigit(password[i]))
        {
            valid_digit = true;
        }
        if else (ispunct(password[i]))
        {
            valid_punc = true;
        }
    }
    //
    if (valid_upper && valid_lower && valid_digit && valid_punct)
    {
        return true;
    }
    else
    {
        return false;
    }
}
