#ifndef GAME_H
#define GAME_H

#pragma once
#include "Fighter.h"

class Game {
public:
    Game();
    void run();

private:
    void printState() const;

    Fighter hero_;
    Fighter enemy_;
    int potions_;
};

#endif