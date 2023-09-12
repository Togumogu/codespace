#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Start pop failsafe
    int start_pop;
    do
    {
        start_pop = get_int("Start Population: ");
    }
    while (start_pop <= 9);

    //End pop failsafe
    int end_pop;
    do
    {
        end_pop = get_int("Start Population: ");
    }
    while (end_pop < start_pop);

    //Pop Calculation
    int i = 0;
    while (start_pop < end_pop)
    {
        start_pop = start_pop + (start_pop/3) + (start_pop/4);
        i += 1;
    }
    printf("It took %i years to reach the designated population count.\n", i);
}
