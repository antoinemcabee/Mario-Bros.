//
// Created by fitts on 11/13/2018.
//

#ifndef GROUPPROJECT_PLATFORM_H
#define GROUPPROJECT_PLATFORM_H
#include "SDL_Plotter.h"

class Platform
{

public:

    //Draws platform
    void drawPlatform1 (SDL_Plotter & g)
    {
        int width = 1000;
        int height = 70;
        int posX = 0;
        int posY = 500;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 38, 36, 96);
            }
        }
    }

    //Draws platform
    void drawPlatform2 (SDL_Plotter & g)
    {
        int width = 300;
        int height = 10;
        int posX = 0;
        int posY = 400;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 2, 108, 181);
            }
        }
    }

    //Draws platform
    void drawPlatform3 (SDL_Plotter & g)
    {
        int width = 300;
        int height = 10;
        int posX = 700;
        int posY = 400;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 2, 108, 181);
            }
        }
    }

    //Draws platform
    void drawPlatform4 (SDL_Plotter & g)
    {
        int width = 300;
        int height = 10;
        int posX = 350;
        int posY = 300;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 2, 108, 181);
            }
        }
    }

    //Draws platform
    void drawPlatform5 (SDL_Plotter & g)
    {
        int width = 300;
        int height = 10;
        int posX = 0;
        int posY = 200;



        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 2, 108, 181);
            }
        }
    }

    //Draws platform
    void drawPlatform6 (SDL_Plotter & g) {
        int width = 300;
        int height = 10;
        int posX = 700;
        int posY = 200;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 2, 108, 181);
            }
        }
    }


};

#endif //GROUPPROJECT_PLATFORM_H
