// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

string replace(string word[]);

int main(int argc, string argv[])
{
    if (argv[1] == NULL)
    {
        printf("Error\n");
        return 1;
    }

    replace(argv[1]);
}

string replace(string word[])
{
    
    for (int i = 0; i <= word; i++)
    {
        if (word[i] = 'a')
        {
            word[i] = '6';
        }
        if (word[i] = 'e')
        {
            word[i] = '3';
        }
        if (word[i] = 'i')
        {
            word[i] = '1';
        }
        if (word[i] = 'o')
        {
            word[i] = '0';
        }
    }
    printf("%s\n", word);
}