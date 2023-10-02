#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // failsafe for no or more than 1 inputs
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // failsafe for non and negative number
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // get ready to rotate
    string phrase = get_string("plaintext: ");
}