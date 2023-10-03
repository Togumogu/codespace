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
    convert(input);
    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    // with recursion
    int length = strlen(input) - 1;
    if (length < 0)
    {
        return;
    }
    int last_digit = input[length] - 48;
    input[length] = '\0';
    return (10 * convert(input) + last_digit);

}