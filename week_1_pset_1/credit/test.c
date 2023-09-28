#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long func_num = get_long("long?");
    int set1 = 0;
    int digit1 = 0;

    printf("funcnum first %lu\n", func_num);
    digit1 = func_num % 10;
    printf("digit1 %i\n", digit1);
    printf("funcnum second %lu\n", func_num);
    set1 += digit1;
    printf("%i\n", set1);

}