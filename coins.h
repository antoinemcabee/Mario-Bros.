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
    int posX = 100;
    int posY = 180;

    //Moves coin to the right diagonally
    void moveCoinRightDiag()
    {
        posX++;
        posY++;
    }

    //Moves player to the left diagonally
    void moveCoinLeftDiag(int x, int y)
    {
        posX--;
        posY++;
    }

    //Restricts the
    void blockCoins(int xOffset, int yOffset) {
        posY = min(max(posY + yOffset, 0), 485 - height);
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
        //posX = 0;
        //posY = 375;
        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 200, 200, 0);
            }
        }
    }


    void fallCoinLeft() {
        posY++;
        //platform 5
        if ((posY + height) == 200 && posX < 300) {
            posY--;
        }


        //platform 2
        if ((posY + height) == 400 && posX < 300) {
            posY--;
        }


        //platform 6
        if ((posY + height) == 200 && posX > 700) {
            posY--;
        }


        //platform 3
        if ((posY + height) == 400 && posX > 700) {
            posY--;
        }

        //platform 4
        if ((posY + height) == 300 && posX < 650 && posX > 350) {
            posY--;
        }
    }

};



#endif //GROUPPROJECT_COINS_H
