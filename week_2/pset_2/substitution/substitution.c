#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
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
    // caps for code so easier
    for (int i = 0; i < strlen(cipher); i++)
    {
        cipher[i] = toupper(cipher[i]);
    }
    // get ready to rotate
    string phrase = get_string("plaintext: ");
    // feed phrase into sub func
    for (int i = 0; i < strlen(phrase); i++)
    {
        phrase[i] = substitute(phrase[i], cipher);
    }
    //print cipher text
    printf("ciphertext: %s\n", phrase);

}
//substitute funtion
char substitute(char letter, string code)
{
    //only move letters
    if (isalpha(letter))
    {
        int alp_row = letter;
        //if uppercase
        if(isupper(letter))
        {
            alp_row = alp_row - 64;
            letter = code[alp_row];
        }
        //if lowercase
        else if (islower(letter))
        {
            alp_row = alp_row - 96;
            letter = tolower(code[alp_row]);
        }
    }
    return letter;
}

//find which row
//then array[row]