#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }
    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    // with recursion
    int length = strlen(input);
    if (length == 1)
    {
        return (input[0] - 48);
    }
    else
    {
        int last_digit = input[length -1] - 48;
        input[length -1] = '\0';
        return (last_digit + 10 * convert(input));
    }
    /*
    // alternative better recursion
    int length = strlen(input);
    int tmp = 0;
    if (length == 0)
    {
        return number;
    }
    for (int i = length - 1; i >= 0; i--)
    {
        tmp = input[i] - 48;
        input[i] = '\0';
        convert(input);
        number = number * 10 + tmp
        return number;
    }
    return number;
    */
}