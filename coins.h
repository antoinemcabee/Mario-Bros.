//
// Created by fitts on 11/26/2018.
//

#ifndef GROUPPROJECT_COINS_H
#define GROUPPROJECT_COINS_H
#include <iostream>
#include "SDL_Plotter.h"

using namespace std;

class Coins{

public:
    int width = 10;
    int height = 10;
    int posX = 0;
    int posY = 180;

    void moveCoinRight()
    {
        posX++;
        posY++;
    }
    void moveCoinLeft()
    {
        posX--;
        posY++;
    }
    void moveCoinSomewhere(){
        posX++;
    }
    void moveCoinElsewhere(){
        posX--;
    }

    void blockCoins(int xOffset, int yOffset) {
        posY = min(max(posY + yOffset, 0), 500 - height);
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


    void drawCoin1(SDL_Plotter & g)
    {
        posX = 500;
        posY = 500;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 200, 200, 0);
            }

        }

    }


    void drawCoin2(SDL_Plotter & g)
    {
        posX = 0;
        posY = 375;
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
