#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char substitute(char letter, string code);

int main(int argc, string argv[])
{
    // failsafe for no or more than 1 inputs
    if (argc != 2 || strlen(argv[1]) != 26)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // store argv[1]
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
    // caps for code so easier
    for (int i = 0; i < strlen(cipher); i++)
    {
        cipher[i] = toupper(cipher[i]);
    }
    //count if every char is once
    int alp_count[26];
    for (int i = 0; i < strlen(cipher); i++)
    {
        int alph_row_main = cipher[i];
        alph_row_main = alph_row_main - 64;
        alp_count[alph_row_main]++;
    }
    //if any count is bigger than 1 return
    for (int i = 0; i < 26; i++)
    {
        if (alp_count[i] != 1)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // get ready to rotate
    string phrase = get_string("plaintext: ");
    // feed phrase into sub func
    for (int i = 0; i < strlen(phrase); i++)
    {
        phrase[i] = substitute(phrase[i], cipher);
    }
    // print cipher text
    printf("ciphertext: %s\n", phrase);
}
// substitute funtion
char substitute(char letter, string code)
{
    // only move letters
    if (isalpha(letter))
    {
        int alp_row = letter;
        // if uppercase
        if (isupper(letter))
        {
            alp_row = alp_row - 64;
            letter = code[alp_row - 1];
        }
        // if lowercase
        else if (islower(letter))
        {
            alp_row = alp_row - 96;
            letter = tolower(code[alp_row - 1]);
        }
    }
    return letter;
}
