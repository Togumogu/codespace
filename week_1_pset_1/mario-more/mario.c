#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Failsafe for inputs for 0 and negative numbers
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    //Build the hash loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
