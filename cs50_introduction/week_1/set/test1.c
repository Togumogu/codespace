#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Tower Height: ");
    }
    while (1 >= height || height >= 12);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < height; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}