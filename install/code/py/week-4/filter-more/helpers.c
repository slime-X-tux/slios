#include "helpers.h"
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i<=height; i++) {
        for (int j =0; j<=width; j++) {
            if(((image[i][j].rgbtBlue+image[i][j].rgbtGreen+image[i][j].rgbtRed)/3)<=112){
                image[i][j].rgbtBlue = 0xff;
                image[i][j].rgbtGreen = 0xff;
                image[i][j].rgbtRed = 0xff;
            }
            else {
                image[i][j].rgbtBlue = 0x00;
                image[i][j].rgbtGreen = 0x00;
                image[i][j].rgbtRed = 0x00;
            }
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int tmp = 0;
    for (int i = 0; i<=height; i++) {
        for (int j =0; j<=width/2; j++) {
          tmp = image[i][width-j].rgbtBlue;
          image[i][width-j].rgbtBlue = image[i][j].rgbtBlue;
          image[i][j].rgbtBlue = tmp;

          tmp = image[i][width-j].rgbtGreen;
          image[i][width-j].rgbtGreen = image[i][j].rgbtGreen;
          image[i][j].rgbtGreen = tmp;

          tmp = image[i][width-j].rgbtRed;
          image[i][width-j].rgbtRed = image[i][j].rgbtRed;
          image[i][j].rgbtRed = tmp;

        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i<=height; i++) {
        for (int j = 0; j<=width; j++) {
               if(i<1 && j<1){

               }
               else if (i>1 && j>1){
                    image[i][j].rgbtBlue = (image[i-1][j-1].rgbtBlue+image[i][j-1].rgbtBlue+image[i+1][j-1].rgbtBlue+image[i-1][j].rgbtBlue+image[i][j].rgbtBlue+image[i+1][j].rgbtBlue+image[i-1][j+1].rgbtBlue+image[i][j+1].rgbtBlue+image[i+1][j+1].rgbtBlue)/12; 
                    image[i][j].rgbtRed = (image[i-1][j-1].rgbtRed+image[i][j-1].rgbtRed+image[i+1][j-1].rgbtRed+image[i-1][j].rgbtRed+image[i][j].rgbtRed+image[i+1][j].rgbtRed+image[i-1][j+1].rgbtRed+image[i][j+1].rgbtRed+image[i+1][j+1].rgbtRed)/12;
                    image[i][j].rgbtGreen = (image[i-1][j-1].rgbtGreen+image[i][j-1].rgbtGreen+image[i+1][j-1].rgbtGreen+image[i-1][j].rgbtGreen+image[i][j].rgbtGreen+image[i+1][j].rgbtGreen+image[i-1][j+1].rgbtGreen+image[i][j+1].rgbtGreen+image[i+1][j+1].rgbtGreen)/12;
               }
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
