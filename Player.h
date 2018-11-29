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
    int posX = 0;
    int posY = 0;


public:
    void movePlayer(int xOffset, int yOffset)
    {
        posY = min (max (posY + yOffset, 0), windowHeight - height);

    }
    void movePlayerRight(){

            posX += 1;
    }
    void movePlayerLeft(){

        posX -= 1.5;
    }
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


    void blockPlayer(int xOffset, int yOffset) {
        posY = min(max(posY + yOffset, 0), 500 - height);
    }

//    array of 2 Output() {
//        arrary of 2 arr[0] = posx arr[1] = posY
//                return array


    int passXVal(){
        return posX;
    }

    int passYVal(){
        return posY;

    }



};

#endif //GROUPPROJECT_PLAYER_H
