//
// Created by fitts on 11/12/2018.
//

#ifndef GROUPPROJECT_PLAYER_H
#define GROUPPROJECT_PLAYER_H


#include "SDL_Plotter.h"

using namespace std;

const int windowHeight = 600;
const int windowWidth = 1000;
SDL_Plotter g(windowHeight,windowWidth);

class Player
{
private:
    // Rectangle Variables
    int width = 74;
    int height = 22;
    int posX = 200;
    int posY = 200;

public:
    void movePlayer(int xOffset, int yOffset)
    {
        posX = min (max (posX + xOffset, 0), windowWidth - width);
        posY = min (max (posY + yOffset, 0), windowHeight - height);

    }

    void draw (SDL_Plotter & g)
    {

        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 0, 0, 0);
            }

        }

    }

};

#endif //GROUPPROJECT_PLAYER_H
