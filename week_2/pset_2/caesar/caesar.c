#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char replace(char character, int key);

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
    /* Initially wrote this to convert 2 digit string into an integer turns out there is a function bruh
    //turn argv[1] into int
    int int_key;
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        int_key = int_key + (argv[1][i] - 48) * pow(10, strlen(argv[1]) - i -1);
        //
    }
    */
    // turn argv[1] into int without wasting half an hour
    int int_key = atoi(argv[1]);
    // loop to feed every char to replace function
    for (int i = 0; i < strlen(phrase); i++)
    {
        phrase[i] = replace(phrase[i], int_key);
    }
    // print
    printf("ciphertext: %s\n", phrase);
}
// replace function
char replace(char character, int key)
{
    // check for letters
    if (isalpha(character))
    {
        // modify key so ASCII wraps around the alphabet
        while (key >= 26)
        {
            key = key - 26;
        }
        // push char in reference to key
        // push according to whether upper or lower
        int alph_line = character;
        if (isupper(character)) // e.g S is the 83th decimal in ASCII
        {
            alph_line = alph_line - 64; // e.g. since its upper, subtract 64 to find real place in alphabet, for S --> 83 - 64 = 19
        }
        else if (islower(character))
        {
            alph_line = alph_line - 96;
        }
        // if key is bigger than how many letters left
        if (key > 26 - alph_line) // e.g. subtract S's row from the total number of letter in the alphabet to see how many letters
                                  // after S --> 26 - 19 = 7
        {                         // e.g. 7 is smaller than the key, so instead of going forward the amount of the key
            int char_ascii;
            char_ascii = character;
            char_ascii = char_ascii - (26 - key); // e.g. we go back minus 26 - 13 times to "wrap" around the alphabet
            character = char_ascii;
        }
        else
        {
            int char_ascii;
            char_ascii = character;
            char_ascii = char_ascii + key; // e.g. if key is smaller or equal we simply go forward
            character = char_ascii;
        }
    }
    // return
    return character;
}