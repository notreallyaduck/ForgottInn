//
// Created by Sudesh Arunachaqlam on 12/3/2022.
//
#include <string>

#include <iostream>

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
    string inventory[5] = {
            "",
            "",
            "",
            "",
            ""
    };

    ForgotPlayer(int Health, bool Life) {
        health = Health;
        isAlive = Life;
    }

    void changeHealth(int damage) {
        health = health - damage;
    }


    void setWeapon(int Weapon) {
        currentWeapon = Weapon;
    }

    void setName(string enteredName) {
        name = enteredName;
    }

    void setLife(bool dead){
        if (dead){
            health = 0;
        }
    }

    void setSecond(int Weapon) {
        secondaryWeapon = Weapon;
    }

    void setPosition(int Position) {
        position = Position;
    }

    basic_string<char, char_traits<char>, allocator<char> > getName() {
        return name;
    }

    int getHealth() {
        return health;
    }

    int getLife() {
        return isAlive;
    }

    int getPosition() {
        return position;
    }

    int addToInventory(string item) {
        for (int i = 0; i < 5; i++) {
            if (inventory[i].empty() && i != 5) {
                inventory[i] = item;
                break;
            }
        }
    }

    int clearInventorySlot(int indexToRemove) {
        inventory[indexToRemove].clear();
    }

    basic_string<char, char_traits<char>, allocator<char> > getInventory(int i) {
        return inventory[i];
    }
};

#endif //FORGOTTINN_FORGOTPLAYER_H