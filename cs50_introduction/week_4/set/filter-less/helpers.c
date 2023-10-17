#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            BYTE grayscaled = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);
            image[i][j].rgbtBlue = grayscaled;
            image[i][j].rgbtGreen = grayscaled;
            image[i][j].rgbtRed = grayscaled;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE temp;
            RGBTRIPLE semp;
            temp.rgbtBlue = image[i][j].rgbtBlue;
            temp.rgbtGreen = image[i][j].rgbtGreen;
            temp.rgbtRed = image[i][j].rgbtRed;
            semp.rgbtRed = round(.393 * temp.rgbtRed) + round(.769 * temp.rgbtGreen) + round(.189 * temp.rgbtBlue);
            semp.rgbtGreen = round(.349 * temp.rgbtRed) + round(.686 * temp.rgbtGreen) + round(.168 * temp.rgbtBlue);
            semp.rgbtBlue = round(.272 * temp.rgbtRed) + round(.534 * temp.rgbtGreen) + round(.131 * temp.rgbtBlue);
            if (semp.rgbtRed > 255)
            {
                semp.rgbtRed = 255;
            }
            if (semp.rgbtBlue > 255)
            {
                semp.rgbtBlue = 255;
            }
            if (semp.rgbtGreen > 255)
            {
                semp.rgbtGreen = 255;
            }
            image[i][j].rgbtBlue = semp.rgbtBlue;
            image[i][j].rgbtGreen = semp.rgbtGreen;
            image[i][j].rgbtRed = semp.rgbtRed;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE temp[height][width];
            image[i][j] = image[i][width - j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
