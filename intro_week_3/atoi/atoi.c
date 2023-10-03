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
    int converted = 0;
    for (int i = strlen(input - 1); i >= 0; i--)
    {
        int tmp = input[i];
        tmp = tmp - 48;
        tmp = tmp * pow(10, strlen(input -1) - i);
        converted += tmp;
    }
    return converted;
}