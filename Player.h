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
    int posX = 500;
    int posY = 0;


public:

    //Moves player
    void movePlayer(int xOffset, int yOffset)
    {
        posY = min (max (posY + yOffset, 0), windowHeight - height);

    }

    //Moves player right
    void movePlayerRight(){

            posX += 1;
    }

    //Moves player left
    void movePlayerLeft(){

        posX -= 1;
    }

    //Draws player
    void drawPlayer (SDL_Plotter & g)
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

    //Makes player fall
    void fallObject() {
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
        if ((posY + height) == 200 && posX > 685) {
            posY--;
        }

        //platform 3
        if ((posY + height) == 400 && posX > 685) {
            posY--;
        }

        //platform 4
        if ((posY + height) == 300 && posX < 650 && posX > 335) {
            posY--;
        }

        //platform 1
        if ((posY + height) == 500)
        {
            posY--;
        }

    }


    //Restricts player
    void blockPlayer(int xOffset, int yOffset) {
        posX = min(max(posX + yOffset, 0), 1000 - width);
        posY = min(max(posY + yOffset, 0), 500 - height);
    }

    //Passes player values
    int passXVal(){
        return posX;
    }

    int passYVal(){
        return posY;

    }

};

#endif //GROUPPROJECT_PLAYER_H
