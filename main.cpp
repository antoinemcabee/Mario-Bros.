#include <iostream>
#include <fstream>
#include "SDL_Plotter.h"
#include "Player.h"
#include "platform.h"
#include "Movement.h"
#include "turtles.h"
#include "coins.h"
#include "pipes.h"

using namespace std;

int main(int argc, char ** argv) {
    const int windowHeight = 600;
    const int windowWidth = 1000;
    int posX = 485;
    int width = 15;

    SDL_Plotter g(windowHeight, windowWidth);

    Player mario;
    Platform block;
    Turtle turtle;
    Turtle turtle1;
    Coins coin;
    Coins coin1;
    Coins coin2;
    Pipes pipe;

    bool stopped = false;

    while (!g.getQuit()) {
        // Height/Width limiter

        if (g.getKey() == UP_ARROW) {
            mario.movePlayer(0, -1);
        } else if (g.getKey() == LEFT_ARROW) {
            mario.movePlayerLeft();
        } else if (g.getKey() == RIGHT_ARROW) {
            mario.movePlayerRight();
        } else if (!g.getKey()) {
            mario.fallObject();
            mario.blockPlayer(0, 0);
        }

        if (g.getKey() == UP_ARROW) {
            turtle1.moveOpponentLeft();
        } else if (g.getKey() == LEFT_ARROW) {
            turtle1.moveOpponentLeft();
        } else if (g.getKey() == RIGHT_ARROW) {
            turtle1.moveOpponentRight();

        } else if (!g.getKey()) {
            turtle1.fallEnemyLeft();
            //mario.blockPlayer(0, 0);
        }

        // Draw Background
        for (int col = 0; col < windowWidth; ++col) {
            for (int row = 0; row < windowHeight; ++row) {
                g.plotPixel(col, row, 0, 0, 0);
            }
        }

        //draw mario
        mario.drawPlayer(g);


        //draw first coin, move coin and prevent coin from going through a platform
        coin.drawCoin(g);
        coin.moveCoinRightDiag();
        coin.blockCoins(0, 0);

        //draw second coin, move coin and prevent coin from going through a platform
        coin1.drawCoin(g);
        coin1.moveCoinLeftDiag(1, 1);
        coin1.blockCoins(0, 0);
        coin1.fallCoinLeft();

        //draw third coin and move coin
        coin2.drawCoin2(g);
        coin2.moveCoinLeft();
        coin2.blockCoins(0, 0);

        //draw and move enemy one
        turtle.drawOpponent1(g);
        turtle.moveOpponentRight();
        turtle.fallEnemy();
        turtle.blockOpponent(0, 0);

        //draw and move enemy two
        turtle1.drawOpponent1(g);
        turtle1.moveOpponentLeft();
        turtle1.fallEnemy();
        turtle1.blockOpponent(0,0);

        //draw pipe
        pipe.drawPipeLeft(g);
        pipe.drawPipeLeftTop(g);
        pipe.drawPipeRight(g);
        pipe.drawPipeRightTop(g);
        pipe.drawPipeBottomLeft(g);
        pipe.drawPipeBottomRight(g);

        //draw platforms
        block.drawPlatform1(g);
        block.drawPlatform2(g);
        block.drawPlatform3(g);
        block.drawPlatform4(g);
        block.drawPlatform5(g);
        block.drawPlatform6(g);

        int XVal = mario.passXVal();
        int YVal = mario.passYVal();

        turtle.playerXVal(XVal);
        turtle.playerYVal(YVal);

            if (g.kbhit()) {
                g.getKey();
            }

            g.update();
        }
}