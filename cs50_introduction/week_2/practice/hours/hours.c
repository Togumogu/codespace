#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    // Total
    if (output == 'T')
    {
        float total_hours = 0;
        for (int i = 0; i < weeks; i++)
        {
            total_hours += hours[i];
        }
        return total_hours;
    }
    //  Average
    else if (output == 'A')
    {
        float total_hours = 0;
        float av_hours = 0;
        for (int i = 0; i < weeks; i++)
        {
            total_hours += hours[i];
        }
        av_hours = total_hours / weeks;
        return av_hours;
    }
    else
    {
        return false;
    }
}
// Since both of A and T's for loops start the same we can put the if statements in a single for loop as well
// it should look something like this
/*
    float calc_hours(int hours[], int weeks, char output)
    {
        for (int i = 0; i < hours; i++)
        {
            if (output = T)
            {
            return hours;
            }
            if (output = A)
            {
            average = hours / weeks;
            return average;
            }
        }
    }
*/