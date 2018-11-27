//
// Created by Mcabee on 11/26/2018.
//

#ifndef MARIO_MOVEMENT_H
#define MARIO_MOVEMENT_H


#include "SDL_Plotter.h"
#include "platform.h"
#include "player.h"

using namespace std;

class Movement{
    int posX = 485;

public:
    void moveLeft(int x, int y){
        for(int i = 0; i < windowWidth; i++){
            posX--;
        }
    }
};

#endif //MARIO_MOVEMENT_H