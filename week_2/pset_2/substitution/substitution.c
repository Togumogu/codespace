#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//need to fix different inputs same letter

int main(int argc, string argv[])
{
    // failsafe for no or more than 1 inputs
    if (argc != 2 || strlen(argv[1]) != 26)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //store argv[1]
    string cipher = argv[1];
    // failsafe for non alphabetical input
    for (int i = 0; i < strlen(cipher); i++)
    {
        if (!isalpha(cipher[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    }
    // get ready to rotate
    string phrase = get_string("plaintext: ");
    
}
//replace funtion
//to upper