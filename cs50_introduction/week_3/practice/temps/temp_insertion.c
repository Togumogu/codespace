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
// INSERTION SORT - from left to right compare each number and sort them according starting from 2 to length of array e.g sort first two sort first three...
// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    // iterate but start from 1 bc we stored the second elemnent of the array in a variable so we need to get the first
    //to start comparing
    for (int i = 1; i < NUM_CITIES; i++)
    {
        avg_temp temporary[1];
        temporary[0] = temps[i];
        int j = i - 1; //to compare with the value before
        // shift until you are at the lefmost element and the left is bigger than you
        while (j >= 0 && temps[j].temp > temporary[0].temp)
        {
            //move to left
            temps[j + 1] = temps[j];
            j -= 1; //this is whats doing the shifthing

        }
        temps[j + 1] = temporary[0];
    }
}
