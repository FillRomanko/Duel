#ifndef FIGHTER_H
#define FIGHTER_H

class Fighter {
public:
    explicit Fighter(int maxHp);

    void takeDamage(int amount);
    void heal(int amount);

    int hp() const;
    bool alive() const;

private:
    int currentHp_;
    int maxHp_;
};

#endif