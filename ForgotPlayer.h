//
// Created by Sudesh Arunachalam on 12/3/2022.
//
#include <string>

#ifndef FORGOTTINN_FORGOTPLAYER_H
#define FORGOTTINN_FORGOTPLAYER_H

using namespace std;

class ForgotPlayer {
public:
    string name;
    int health;
    bool isAlive;
    int position;
    int currentWeapon = 0;
    int secondaryWeapon = 0;


    ForgotPlayer(string Name, int Health, bool Life) {
        name = Name;
        health = Health;
        isAlive = Life;
    }

    void setHealth(int Health) {
        health = Health;
    }

    void setWeapon(int Weapon) {
        currentWeapon = Weapon;
    }

    void setSecond(int Weapon) {
        secondaryWeapon = Weapon;
    }

    void setPosition(int Position) {
        position = Position;
    }

    basic_string<char, char_traits<char>, allocator<char>> getName() {
        return name;
    }

    int getHealth() {
        return health;
    }

    int getLife() {
        return isAlive;
    }

    int getPosition(){
        return position;
    }
};


#endif //FORGOTTINN_FORGOTPLAYER_H
