//
// Created by MCABEE on 11/15/2018.
//

#ifndef MARIO_TURTLES_H
#define MARIO_TURTLES_H

#include "SDL_Plotter.h"
#include "platform.h"

using namespace std;

class Turtle
{
private:
    // Rectangle Variables
    int width = 20;
    int height = 35;
    int posX = 980;
    int posY = 180;
    int posX1 = 0;
    int posY1 = 200;

public:
    void moveOpponent(int xOffset, int yOffset)
    {
        posX = min (max (posX + xOffset, 0), windowWidth - width);
        posY = min (max (posY + yOffset, 0), windowHeight - height);

    }
    void moveOpponentRight(int x, int y){

        posX++;
    }
    void drawOpponent(SDL_Plotter & g)
    {
        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 200, 0, 0);
            }

        }

    }

};

#endif //MARIO_TURTLES_H