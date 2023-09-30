#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    //ask for input only letters
    string user_input = get_string("Text: ");
    printf("%s\n", user_input);
    //store it in a string
    //count letter w islower is upper
    //count word w space isspace space + 1
    //count sent w . ! ? ispunct punct + 1 however no , ' : ;
    //print grade x
        //if grade > 16 output 16+
        //if grade < 1 outout before grade 1
}

int count_letters(string user_text)