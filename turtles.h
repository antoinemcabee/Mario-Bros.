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
    int width = 20;
    int height = 20;
    int posX = 970; //cant be set
    int posY = 380; // same

public:

    int playerXVal(int playerX){

    }

    int playerYVal( int playerY){

    }

    void moveOpponent(int xOffset, int yOffset)
    {
        posY = min (max (posY + yOffset, 0), windowHeight - height);

    }
    void moveOpponentRight(){

        posX += 1;
    }
    void moveOpponentLeft(){

        posX -= 1.5;
    }

    void fallEnemy() {
        //posY++;
        posX--;
        //platform 6 <-
        if ((posY + height) >= 400 && posX < 700) {
            //posX = 970;
            //posY = 100;
            posY++;
        } else if ((posY + height) >= 300 && posX >= 650 && posX <= 350) {
            posY++;
        } else if ((posY + height) >= 200 && posX <= 700) {
            posY++;
        }


    }


//    void drawOpponent(SDL_Plotter & g)
//    {
//        // Draw Loop
//        for (int col = posX; col < width + posX; ++col)
//        {
//            for (int row = posY; row < height + posY; ++row)
//            {
//                g.plotPixel(col, row, 0, 150, 0);
//            }
//
//        }
//
//    }


    void drawOpponent1(SDL_Plotter & g)
    {
        //int posY = 380;
        //int posX1 = 0;
        //int posY1M= 200;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col)
        {
            for (int row = posY; row < height + posY; ++row)
            {
                g.plotPixel(col, row, 0, 150, 0);
            }

        }

    }

    void blockOpponent(int xOffset, int yOffset) {
        posY = min(max(posY + yOffset, 0), 500 - height);
    }

//    CRASHING (INT , INT ) {
//
//
//    }
//



//
//    void moveOpponentRight(){
//
//        posX++;
//    }
//    void drawOpponent(SDL_Plotter & g)
//    {
//        // Draw Loop
//        for (int col = posX; col < width + posX; ++col)
//        {
//            for (int row = posY; row < height + posY; ++row)
//            {
//                g.plotPixel(col, row, 0, 150, 0);
//            }
//
//        }
//
//    }
//
//
//
//  void drawOpponent1(SDL_Plotter & g)
//    {
//        int posY = 380;
//        int posX1 = 0;
//        int posY1 = 200;
//
//        // Draw Loop
//        for (int col = posX; col < width + posX; ++col)
//        {
//            for (int row = posY; row < height + posY; ++row)
//            {
//                g.plotPixel(col, row, 0, 150, 0);
//            }
//
//        }
//
//    }
//
//    void fall(){
//        posY++;
//    }
//
//    void moveOpponentLeft(){
//        posX--;
//    }
//    void blockOpponent(int xOffset, int yOffset) {
//
//        posY = min(max(posY + yOffset, 0), 395 - (height + 3));
//
//    }
//    void fallEnemyLeft() {
//        posY++;
//        //platform 5
//        if ((posY + height) == 200 && posX < 300) {
//            posY--;
//        }
////        if((posY) == 210 && posX < 300){
////            posY++;
////        }
//
//        //platform 2
//        if ((posY + height) == 400 && posX < 300) {
//            posY--;
//        }
////        if((posY) == 410 && posX < 300){
////            posY++;
////        }
//
//        //platform 6
//        if ((posY + height) == 200 && posX > 700) {
//            posY--;
//        }
////        if((posY) == 210 && posX > 700){
////            posY++;
////        }
//
//        //platform 3
//        if ((posY + height) == 400 && posX > 700) {
//            posY--;
//        }
//
//        //platform 4
//        if ((posY + height) == 300 && posX < 650 && posX > 350) {
//            posY--;
//        }
//    }

};

#endif //MARIO_TURTLES_H