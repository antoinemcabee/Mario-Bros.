#include <iostream>

#include "SDL_Plotter.h"
#include "Player.h"

using namespace std;

int main(int argc, char ** argv)
{
    const int windowHeight = 600;
    const int windowWidth = 1000;

    SDL_Plotter g(windowHeight,windowWidth);

    Player mario;

    bool stopped = false;


    while (!g.getQuit())
    {

        // Input

        // Height/Width limiter
        if (g.getKey() == DOWN_ARROW)
        {
           mario.movePlayer(0, 1);

        }
        else if (g.getKey() == UP_ARROW)
        {
            mario.movePlayer(0,-1);
        }
        else if (g.getKey() == RIGHT_ARROW)
        {
            mario.movePlayer(1, 0);
        }
        else if (g.getKey() == LEFT_ARROW)
        {
            mario.movePlayer(-1, 0);
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



        if(g.kbhit()){
            g.getKey();
        }

        g.update();
    }
}
