#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Start pop failsafe
    int startpop;
    do
    {
        int startpop = get_int("Start Population: ");
    }
    while (startpop =< 9)

    //End pop failsafe
    int endpop;
    do
    {
        int endpop = get_int("Start Population: ");
    }
    while (endpop < startpop)

    //Pop Calculation
    int i = 0;
    while (n < m)
    {
        n = n + (n/3) + (n/4)l;
        i += 1;
    }
    printf("It took %i years to reach the designated population count.\n", i);
}
