#include <iostream>
#include <fstream>
#include "SDL_Plotter.h"
#include "Player.h"
#include "platform.h"
#include "Tutrles.h"

using namespace std;

int main(int argc, char ** argv)
{
    const int windowHeight = 600;
    const int windowWidth = 1000;




    SDL_Plotter g(windowHeight,windowWidth);
    Turtle opponets;

    Player mario;
    Platform block;

    bool stopped = false;

    while (!g.getQuit())
    {


        // Height/Width limiter
        if (g.getKey() == DOWN_ARROW)
        {
           mario.movePlayer(0, 1);
           mario.blockPlayer(0, 1);
           mario.blockPlayer2(0, 1);

        }
        else if (g.getKey() == UP_ARROW)
        {
            mario.movePlayer(0,-1);
            mario.blockPlayer(0, -1);
            mario.blockPlayer2(0, -1);
        }
        else if (g.getKey() == RIGHT_ARROW)
        {
            mario.movePlayer(1, 0);
            mario.blockPlayer(1, 0);
            mario.blockPlayer2(1, 0);
        }
        else if (g.getKey() == LEFT_ARROW)
        {
            mario.movePlayer(-1, 0);
            mario.blockPlayer(-1, 0);
            mario.blockPlayer2(-1, 0);
        }

        // Draw Background fam
        for (int col = 0; col < windowWidth; ++col)
        {
            for (int row = 0; row < windowHeight; ++row)
            {
                g.plotPixel(col, row, 255, 255, 255);
            }
        }

        //draw mario
        mario.draw(g);
        block.drawPlatform1(g);
        block.drawPlatform2(g);
        block.drawPlatform3(g);
        block.drawPlatform4(g);
        block.drawPlatform5(g);
        block.drawPlatform6(g);

        opponets.opponet1(g);
        opponets.movePlayer(-1, 0);


        if(g.kbhit()){
            g.getKey();
        }

        g.update();
    }



}
