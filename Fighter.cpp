#include "Fighter.h"

Fighter::Fighter(int maxHp) : currentHp_(maxHp), maxHp_(maxHp) {}

void Fighter::takeDamage(int amount) {
    if (amount <= 0) return;
    currentHp_ -= amount;
    if (currentHp_ < 0) currentHp_ = 0;
}

void Fighter::heal(int amount) {
    if (amount <= 0) return;
    currentHp_ += amount;
    if (currentHp_ > maxHp_) currentHp_ = maxHp_;
}

int Fighter::hp() const {
    return currentHp_;
}

bool Fighter::alive() const {
    return currentHp_ > 0;
}