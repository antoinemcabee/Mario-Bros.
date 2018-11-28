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
public:
        int width = 20;
        int height = 20;
        int posX = 980;
        int posY = 170;
        int posX1 = 0;
        int posY1 = 200;

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


  void drawOpponent1(SDL_Plotter & g)
    {

        int width = 20;
        int height = 20;
        int posY = 370;
        int posX1 = 0;
        int posY1 = 200;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 200, 0, 0);
            }

        }

    }

    void moveOpponentLeft(){
        posX--;
    }


};

#endif //MARIO_TURTLES_H