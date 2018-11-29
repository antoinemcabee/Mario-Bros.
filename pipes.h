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
                g.plotPixel(col, row, 168, 32, 78);
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
                g.plotPixel(col, row, 168, 32, 78);
            }
        }
    }

    void drawPipeRight(SDL_Plotter &g) {
        int width = 10;
        int height = 100;
        int posX = 0;
        int posY = 100;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 168, 32, 78);
            }
        }
    }

    void drawPipeRightTop(SDL_Plotter &g) {
        int width = 50;
        int height = 70;
        int posX = 0;
        int posY = 100;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 168, 32, 78);
            }
        }
    }

    void drawPipeBottomLeft(SDL_Plotter &g) {
        int width = 75;
        int height = 45;
        int posX = 0;
        int posY = 435;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 168, 32, 78);
            }
        }
    }

    void drawPipeBottomRight(SDL_Plotter &g) {
        int width = 75;
        int height = 45;
        int posX = 1000-width;
        int posY = 435;

        // Draw Loop
        for (int col = posX; col < width + posX; ++col) {
            for (int row = posY; row < height + posY; ++row) {
                g.plotPixel(col, row, 168, 32, 78);
            }
        }
    }



};

#endif //MARIO_PIPES_H
