//
// Created by MCABEE on 11/15/2018.
//

#ifndef MARIO_TUTRLES_H
#define MARIO_TUTRLES_H

#include "SDL_Plotter.h"

class Turtle {
    int width;
    int height;
    int posX;
    int posY;

public:
    void opponet1(SDL_Plotter &g) {
        width = 20;
        height = 20;
        posX = 700;
        posY = 380;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 255, 0, 0);
            }
        }

        posX = min (max (posX + 1, 0),  - width);
        posY = min (max (posY + 0, 0),  - height);
    }

    void movePlayer(int xOffset, int yOffset)
    {

        posX = min (max (posX + xOffset, 0), windowWidth - width);
        posY = min (max (posY + yOffset, 0), windowHeight - height);

    }


};

#endif //MARIO_TUTRLES_H
