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
    while (n < 1 || n > 9);

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i ; j--)
        {
            printf(".");
        }
        printf("\n");
    }
    //Space
    printf("\n");

    //Build the right hash loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
