#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (isdigit(argv[1]) == 0 || argv[1] < 0 || argv[2])
    {
        printf("Usage: ./caesar key\n");
        return true
    }