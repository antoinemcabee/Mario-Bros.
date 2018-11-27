//
// Created by fitts on 11/12/2018.
//

#ifndef GROUPPROJECT_PLAYER_H
#define GROUPPROJECT_PLAYER_H


#include "SDL_Plotter.h"
#include "platform.h"

using namespace std;

const int windowHeight = 600;
const int windowWidth = 1000;
const int posX5 = 0;
const int posY5 = 200;

SDL_Plotter g(windowHeight,windowWidth);


class Player
{
private:
    // Rectangle Variables
    int width = 15;
    int height = 35;
    int posX = 485;
    int posY = 465;
    int posX1 = 0;
    int posY1 = 200;

public:
    void movePlayer(int xOffset, int yOffset)
    {

        posX = min (max (posX + xOffset, 0), windowWidth - width);
        posY = min (max (posY + yOffset, 0), windowHeight - height);

    }

    void blockPlayer(int xOffset, int yOffset) {
        // posX1 = min (max (posX1 + xOffset, 0), windowWidth - width);
        //posY1 = min (max (posY1 + yOffset, 200), windowHeight - height);

        posX = min(max(posX + xOffset, 0), 1000 - width);
        posY = min(max(posY + yOffset, 0), 500 - height);

    }

    void blockPlayer2(int xOffset, int yOffset) {
        // posX1 = min (max (posX1 + xOffset, 0), windowWidth - width);
        //posY1 = min (max (posY1 + yOffset, 200), windowHeight - height);

        posX = min(max(posX + xOffset, 0), 1000 - width);
        posY = min(max(posY + yOffset, 0), 500 - height);

    }



    void draw (SDL_Plotter & g)
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

#endif //GROUPPROJECT_PLAYER_H
