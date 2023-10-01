#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    //ask for input
    string user_input = get_string("Message?: ");

    for (int i = 0; i < strlen(user_input); i++)
    {
        char letter = user_input[i];
        int divided = letter;
        int remainder;
        int binary[7];
        for (int j = BITS_IN_BYTE; j > 0; j--)
        {
            remainder = divided % 2;
            print_bulb(remainder);
            divided = divided / 2;
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
