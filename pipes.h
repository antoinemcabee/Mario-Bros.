//
// Created by ANDREW on 11/28/2018.
//

#ifndef MARIO_PIPES_H
#define MARIO_PIPES_H
#include "SDL_Plotter.h"

class Pipes {

public:

    void drawPipeLeft(SDL_Plotter &g) {
        int width = 10;
        int height = 100;
        int posX = 990;
        int posY = 100;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 173, 161, 116);
            }

        }

    }
    void drawPipeLeftTop(SDL_Plotter &g) {
        int width = 50;
        int height = 70;
        int posX = 950;
        int posY = 100;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 173, 161, 116);
            }

        }

    }



};

#endif //MARIO_PIPES_H
