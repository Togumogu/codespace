#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //failsafe for no or more than 1 inputs
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //failsafe for non and negative number
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //get ready to rotate
    string plaintext = get_string("plaintext: ");
    string phrase = plaintext;
    //loop to feed every char to replace function
    for (int i = 0; i < strlen(phrase); i++)
    {
        replace(phrase[i], argv[1]);
    }
    //print
    printf("plaintext: %s\n", plaintext);
    printf("ciphertext: %s\n", phrase);

}
//replace function
char replace(char character, int key)
{
    //modify key so ASCII wraps around the alphabet
    while (key >= 26)
    {
        key = key - 26;
    }
    //push char in reference to key
    //check for alphabetica
    int char_ascii;
    if (isalpha(character))
    {
        char_ascii = character;
        char_ascii = char_ascii + key;
        character = char_ascii
    }
}