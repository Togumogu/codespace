#include <cs50.h>
#include <stdio.h>
//
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
        //print space for left
        for (int j = (n-1); j > i ; j--)
        {
            printf(" ");
        }
        //print hash for left
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        //leave 2 gaps
        printf("  ");
        //print hash for left
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        //new line
        printf("\n");
    }
}