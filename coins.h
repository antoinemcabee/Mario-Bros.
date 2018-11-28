//
// Created by fitts on 11/26/2018.
//

#ifndef GROUPPROJECT_COINS_H
#define GROUPPROJECT_COINS_H
#include <iostream>
#include "SDL_Plotter.h"

using namespace std;

class Coins{

private:
    // Rectangle Variables
    int width = 10;
    int height = 10;
    int posX = 200;
    int posY = 180;
    int posX1 = 0;
    int posY1 = 200;

public:

    void moveCoinRight(int x, int y)
    {
        posX++;

        
    }


    void drawCoin(SDL_Plotter & g)
    {
        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 200, 200, 0);
            }

        }

    }

};





#endif //GROUPPROJECT_COINS_H
