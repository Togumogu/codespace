#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // failsafe for no or more than 1 inputs
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // failsafe for non alphabetical input
    if (!isalpha(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //store argv[1]
    string cipher = argv[1];
    // get ready to rotate
    string phrase = get_string("plaintext: ");
}
//replace funtion
//to upper