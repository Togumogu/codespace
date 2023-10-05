#include <cs50.h>
#include <stdio.h>
#include <strings.h>

// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
}
pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
bool is_cycle(int winner, int loser)
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

    // Clear graph of locked in pairs
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's ith preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
    // TODO
    // iterate every candidate to see if name matches
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcasecmp(name, candidates[i]) == 0)
        {
            ranks[rank] = i;
            return true;
        }
    }
    return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
    // TODO
    // iterate through every rank
    for (int i = 0; i < candidate_count; i++)
    {
        // iterate through every candidate below the rank
        for (int j = i + 1; j < candidate_count; j++)
        {
            // update preferences, ranks[i] is the cand voted for and j is every other candidate below
            preferences[ranks[i]][ranks[j]]++;
        }
    }
    return;
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = i + 1; j < candidate_count; j++)
        {
            if (preferences[i][j] > preferences[j][i])
            {
                pairs[pair_count].winner = i;
                pairs[pair_count].loser = j;
                pair_count++;

            }
            else if (preferences[i][j] < preferences[j][i])
            {
                pairs[pair_count].winner = j;
                pairs[pair_count].loser = i;
                pair_count++;
            }
        }
    }
    return;
}

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
    // TODO
    // iterate through pairs
    for (int i = 0; i < pair_count - 1; i++)
    {
        for (int j = i + 1; j < pair_count; j++)
        {
            // basically if the difference between the first pairs strength is smaller than the next pairs' swap, pairs[].winner is the location of the winner candidate
            int vote_1 = preferences[pairs[i].winner][pairs[i].loser] - preferences[pairs[i].loser][pairs[i].winner];
            int vote_2 = preferences[pairs[j].winner][pairs[j].loser] - preferences[pairs[j].loser][pairs[j].winner];
            if (vote_1 < vote_2)
            {
                pair tmp = pairs[i];
                pairs[i] = pairs[j];
                pairs[j] = tmp;
            }
        }
    }
    return;
}

// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
    // TODO
    // iterate through pairs
    for (int i = 0; i < pair_count; i++)
    {
        // need a function that checks for cycles
        if(!is_cycle(pairs[i].winner, pairs[i].loser))
        {
            // for every pair lock candidates
            locked[pairs[i].winner][pairs[i].loser] = true;
        }
    }
    return;
}

// Check if cycle
bool is_cycle(int winner, int loser)
{
    if (winner == loser)
    {
        return true;
    }
    for ()
    return false;
}
// Print the winner of the election
void print_winner(void)
{
    // TODO
    return;
}