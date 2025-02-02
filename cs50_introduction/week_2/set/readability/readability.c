#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string user_text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // ask for input only letters
    string user_input = get_string("Text: ");
    // calculate grade
    float av_letters = (count_letters(user_input) * 100) / count_words(user_input);
    float av_sentences = (count_sentences(user_input) * 100) / count_words(user_input);
    float score = (0.0588 * av_letters) - (0.296 * av_sentences) - 15.8;
    int grade = round(score);
    // print grade
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
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
// count sentences
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