#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string user_text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //ask for input only letters
    string user_input = get_string("Text: ");
    //printf letters
    printf("%i letters\n", count_letters(user_input));
    //print words
    printf("%i words\n", count_words(user_input));
    //print sentences
    printf("%i sentences\n", count_sentences(user_input));
    //count word w space isspace space + 1
    //count sent w . ! ? ispunct punct + 1 however no , ' : ;
    //print grade x
        //if grade > 16 output 16+
        //if grade < 1 outout before grade 1
}
// count letters
int count_letters(string text)
{
    int letter_no = 0;
    for (int i = 0; i <= strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letter_no++;
        }
    }
    return letter_no;
}
// count words
int count_words(string text)
{
    int word_no = 1;
    for (int i = 0; i <= strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            word_no++;
        }
    }
    return word_no;
}
//count sentences
int count_sentences(string text)
{
    int sentence_no = 0;
    for (int i = 0; i <= strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence_no++;
        }
    }
    return sentence_no;
}