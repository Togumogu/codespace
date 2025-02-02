// Practice working with structs
// Practice applying sorting algorithms

#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}
// BUBBLE SORT - swap with eachother then stop if no swap is happenning
// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    // Add your code here
    int bubble_counter = -1;
    // every time the counter isnt zero
    while (bubble_counter != 0)
    {
        // reset the counter to zero
        bubble_counter = 0;
        // to iterate through the array
        for (int i = 0; i < NUM_CITIES; i++)
        {
            // create temp value with the same data type to temporarily store values
            avg_temp temporary[1];
            //if the temp to the right is bigger swap
            if (temps[i].temp < temps[i + 1].temp)
            {
                temporary[0] = temps[i];
                temps[i] = temps[i + 1];
                temps[i + 1] = temporary[0];
                // add one to counter so if no swaps happen counter is at 0 and search is done
                bubble_counter++;
            }
        }
    }
}
/*
two loops more intensive and primitive
void sort_cities(void)
{
    for (int i = 0; i < NUM_CITIES; i++)
    {
        for(int j = 0; j < NUM_CITIES - 1 - i; j++) this way doesnt sort the left most which are already sorted
        {
            if (temps[j].temp < temps[j + 1].temp)
            {
                temporary[0] = temps[j];
                temps[j] = temps[j + 1];
                temps[j + 1] = temporary[0];
            }
        }

    }
}

*/