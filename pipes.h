//
// Created by ANDREW on 11/28/2018.
//

#ifndef MARIO_PIPES_H
#define MARIO_PIPES_H
#include "SDL_Plotter.h"

class Pipes {

public:

    void drawPipeLeft(SDL_Plotter &g) {
        int width = 50;
        int height = 90;
        int posX = 950;
        int posY = 120;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 50, 255, 50);
            }

        }

    }
    void drawPipeLeftTop(SDL_Plotter &g) {
        int width = 90;
        int height = 50;
        int posX = 910;
        int posY = 110;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 50, 255, 50);
            }

        }

    }
};

#endif //MARIO_PIPES_H
