#include <ctype.h>
#include <cs50.h>

#include <string.h>

#include <stdio.h>
// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (word1 > word2)
    {
        printf("Player 1 Wins! %i\n", compute_score(word1));
    }
    else if (word1 < word2)
    {
        printf("Player 2 Wins! %i\n", compute_score(word2));
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int player_score = 0;
    string tmp;
    for (int i = 0; 0 <= strlen(word); i++)
    {
        word[i] = POINTS[i];
        player_score += word[i];
    }
    return player_score;
}
