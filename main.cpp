#include <iostream>
#include <fstream>
#include "SDL_Plotter.h"
#include "Player.h"
#include "platform.h"
#include "Movement.h"
#include "turtles.h"
#include "coins.h"
using namespace std;

int main(int argc, char ** argv)
{
    const int windowHeight = 600;
    const int windowWidth = 1000;
    int posX = 485;
    int width = 15;



    SDL_Plotter g(windowHeight,windowWidth);

    Player mario;
    Platform block;
    Turtle turtle;
    Turtle turtle1;
    Coins coin;
    Coins coin1;
    Coins coin2;


    bool stopped = false;


    while (!g.getQuit())
        {
        // Input
        mario.movePlayerRight();

        turtle.moveOpponentRight();
        turtle1.moveOpponentLeft();

        // Height/Width limiter

        if (g.getKey() == UP_ARROW)
        {
           mario.movePlayer(0,-1);
        }
        else if (g.getKey() == LEFT_ARROW)
        {
           mario.movePlayerLeft();
        }
        else if(!g.getKey()) {
            mario.fallObject();
            mario.blockPlayer(0, 0);
        }

        // Draw Background fam
        for (int col = 0; col < windowWidth; ++col)
        {
            for (int row = 0; row < windowHeight; ++row)
            {
                g.plotPixel(col, row, 0, 0, 0);
            }
        }



            //draw mario
        mario.drawPlayer(g);
        block.drawPlatform1(g);
        block.drawPlatform2(g);
        block.drawPlatform3(g);
        block.drawPlatform4(g);
        block.drawPlatform5(g);
        block.drawPlatform6(g);

        turtle.drawOpponent(g);
        turtle1.drawOpponent1(g);
//      turtle1.blockOpponent(0,0);

        coin.drawCoin(g);
        coin.moveCoinRight();
        coin.blockCoins(0,0);
        coin1.drawCoin(g);
        coin1.moveCoinLeft();
        coin1.blockCoins(0,0);
        coin2.drawCoin2(g);
        coin2.moveCoinSomewhere();



        if(g.kbhit()){
            g.getKey();
        }

        g.update();
    }



}
